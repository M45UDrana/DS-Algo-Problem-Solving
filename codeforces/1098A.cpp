#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+5;

vector<int> adj[N];
int cost[N];
int n;
bool ok = true;

int dfs(int u, int p)
{
	vector<int> tmp;
	int mnc = (int)(1e9+7);

	for(int i = 0; i < adj[u].size(); i++)
	{
		int v = adj[u][i];
		if(v != p)
		{
			int x = dfs(v, u);
			if(x != -1)
			{
				tmp.push_back(x);
				ok &= (cost[v] >= cost[u]);
				mnc = min(cost[v], mnc);
			}
		}
	}
	if(cost[u] == -1 and mnc != (int) (1e9+7))
		cost[u] = mnc;

	int sum = 0;
	for(int i = 0; i < tmp.size(); i++)
	{
		sum += tmp[i]-cost[u];
		ok &= (tmp[i] >= cost[u]);
	}
	return sum+cost[u];
}
int32_t main()
{
	cin >> n;
	for(int i = 1; i < n; i++)
	{
		int u; cin >> u;
		adj[u-1].push_back(i);
	}
	for(int i = 0; i < n; i++)
		cin >> cost[i];

	int ans = dfs(0, 0);
	if(ok)
		cout << ans << endl;
	else cout << -1 << endl;

    return 0;
}