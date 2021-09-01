#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
    IO;
	int n, m; cin >> n >> m;
	int e[n], stp[n];
	memset(stp, 0, sizeof(stp));
	for(int i = 0; i < n; i++)
	{
		cin >> e[i];
		if(e[i])
			stp[i] = 1;
	}
	vector<int> adj[n];
	int indg[n];
	memset(indg, 0, sizeof(indg));
	for(int i = 0; i < m; i++)
	{
		int v, u; cin >> v >> u;
		adj[u].pb(v);
		indg[v]++;
	}
	queue<int> q;
	for(int i = 0; i < n; i++)
	{
		if(!indg[i])
		{
			q.push(i);
			e[i] = 1;
		}
	}
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		for(int i = 0; i < adj[u].size(); i++)
		{
			int v = adj[u][i];
			stp[v] = max(stp[v], stp[u] + bool((!e[u]) and e[v]));
			indg[v]--;
			if(!indg[v])
				q.push(v);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans = max(ans, stp[i]);
	cout << ans << endl;
	return 0;
}