#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const int N = 1e5 + 100;
vector<int>adj[N];
int dp[N][2], pr[N][2];

void dfs(int u, int pt)
{
	dp[u][pt] = true;
	for(auto v: adj[u])
	{
		if(!dp[v][pt^1])
		{
			pr[v][pt^1] = u;
			dfs(v, pt^1);
		}
	}
}

int vis[N];
bool cycle = false;

bool dfsCycle(int u)
{
	vis[u] = 1;
	for(auto v: adj[u])
	{
		if(vis[v] == 1)
			return true;
		if(!vis[v] and dfsCycle(v))
			return true;
	}
	vis[u] = 2;
	return false;
}



int main()
{
    IO;
	int n, m; cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> m;
		for(int j = 0; j < m; j++)
		{
			int v; cin >> v;
			adj[i].pb(v);
		}
	}

	int sr; cin >> sr;
	dfs(sr, 0);
	for(int i = 1; i <= n; i++)
	{
		if(dp[i][1] and !adj[i].size())
		{
			vector<int> ans;
			int cur = i, pt = 1;
			while(cur)
			{
				ans.pb(cur);
				cur = pr[cur][pt];
				pt ^= 1;
			}
			cout << "Win" << endl;
			reverse(ans.begin(), ans.end());
			for(auto x: ans)
				cout << x << " ";
			cout << endl;
			return 0;
		}
	}

	if(dfsCycle(sr))
		cout << "Draw" << endl;
	else cout << "Lose" << endl;

	return 0;
}