#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	vector<int> adj[n+1];
	for(int i = 0; i < k; i++)
	{
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bool visit[n+1];
	int cnt = 0;
	memset(visit, 0, sizeof(visit));
	for(int i = 1; i <= n; i++)
	{
		if(visit[i])
			continue;
		queue<int> Q;
		Q.push(i);
		visit[i] = 1;
		while(!Q.empty())
		{
			int u = Q.front();
			Q.pop();
			for(int j = 0; j < adj[u].size(); j++)
			{
				int v = adj[u][j];
				if(!visit[v])
				{
					visit[v] = 1;
					Q.push(v);
					cnt++;
				}
			}
		}
	}
	cout << k - cnt << endl;
	return 0;
}