#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 2e5+7;
vector<int>adj[N], ans;
set<int> st;
bool used[N];

int main()
{
	IO;
	int n, m; cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	for(int i = 1; i <= n; i++)
		st.insert(i);

	while(st.size())
	{
		auto x = st.begin();
		queue<int>q;
		q.push(*x);
		used[*x] = true;
		st.erase(x);
		int cnt = 0;
		while(!q.empty())
		{
			int u = q.front(); q.pop();
			cnt++;
			for(int i = 0; i < adj[u].size(); i++)
				st.erase(adj[u][i]);
			while(st.size())
			{
				x = st.begin();
				q.push(*x);
				used[*x] = true;
				st.erase(x);
			}
			for(int i = 0; i < adj[u].size(); i++)
			{
				int v = adj[u][i];
				if(!used[v])
					st.insert(v);
			}
		}
		ans.pb(cnt);
	}

	sort(ans.begin(),ans.end());
	cout << ans.size() << endl;
	for(auto x: ans)
		cout << x << " ";
	cout << endl;
	return 0;
}