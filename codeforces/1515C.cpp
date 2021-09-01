#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e9;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		int n, m, x; cin >> n >> m >> x;
		vector<pair<int,int>> v[m];
		set<pair<int,int>>st;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			v[i%m].pb(mp(x,i));
		}
		for(int i = 0; i < m; i++)
		{
			int sum = 0;
			for(int j = 0; j < v[i].size(); j++)
				sum += v[i][j].ff;
			st.insert(mp(sum,i));
		}
		auto it = st.begin(), ed = st.end();
		ed--;
		pair<int,int> a = *it, b = *ed, c;
		while(b.ff-a.ff > x)
		{
			st.erase(a);
			st.erase(b);

			c = v[b.ss][v[b.ss].size()-1];
			v[a.ss].pb(c);
			v[b.ss].pop_back();

			a.ff += c.ff;
			b.ff -= c.ff;
			st.insert(a);
			st.insert(b);
			it = st.begin(); ed = st.end();
			ed--;
			a = *it; b = *ed;
		}
		cout << "YES" << endl;
		int ans[n];
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < v[i].size(); j++)
			{
				ans[v[i][j].ss] = i+1;
			}
		}
		for(int i = 0; i < n; i++)
			cout << ans[i] << " \n"[i+1==n];
	}
	return 0;
}