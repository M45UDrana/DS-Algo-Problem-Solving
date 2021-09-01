#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+7;

vector<int> adj[N];
int lf[N];

int dfs(int u)
{
	if(adj[u].size() == 0)
		return lf[u] = 1;
	for(int i = 0; i < adj[u].size(); i++)
		lf[u] += dfs(adj[u][i]);
	return lf[u];
}
int main()
{
	int n; cin >> n;
	for(int v = 2; v <= n; v++)
	{
		int u; cin >> u;
		adj[u].push_back(v);
	}
	dfs(1);
	sort(lf+1, lf+n+1);
	for(int i = 1; i <= n; i++)
		cout <<lf[i] << " \n"[i==n];
	return 0;
}