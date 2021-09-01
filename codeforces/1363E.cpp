#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 2e5+5;

int n; 
ll cst[N], target[N], cnt0[N], cnt1[N];
vector<int> adj[N];
ll ans = 0;

void dfs(int u, int p)
{
	if(target[u] == 1)
		cnt1[u]++;
	else if(target[u] == 0)
	   	cnt0[u]++;

	for(int i = 0; i < adj[u].size(); i++)
	{
		int v = adj[u][i];
		if(u != v and v != p)
		{
			cst[v] = min(cst[v], cst[u]);
			dfs(v, u);

			cnt0[u] += cnt0[v];
			cnt1[u] += cnt1[v];
		}
	}

	ll x = min(cnt0[u], cnt1[u]);
	cnt0[u] -= x; cnt1[u] -= x;
	ans += (x*2)*cst[u];
}

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> cst[i];
		int x, y; cin >> x >> y;
		target[i] = ((x==y) ? -1 : y);
	}

	for(int i = 1;  i < n; i++)
	{
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1, 0);

	if(cnt0[1] == cnt1[1])
		cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}