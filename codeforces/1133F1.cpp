#include <bits/stdc++.h>

using namespace std;
const int N = 2e5+5;
int lst[N];

int find(int x)
{
	if(lst[x] != x)
		return lst[x] = find(lst[x]);
	else return x;
}

int main()
{
	for(int i = 0; i < N; i++)
		lst[i] = i;

	int n, m; cin >> n >> m;
	vector<int> adj[n+1];
	for(int i = 0; i < m; i++)
	{
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool used[n+1];
	memset(used, 0, sizeof(used));
	vector<pair<int,int> > ans;

	priority_queue<pair<int,int> > pq;

	for(int i = 1; i <= n; i++)
		pq.push({adj[i].size(), i});

	while(!pq.empty())
	{
		pair<int,int> p = pq.top();
		pq.pop();

		int u = p.second;
		for(int i = 0; i < adj[u].size(); i++)
		{
			int v = adj[u][i];
			int x = find(u);
			if(x != find(v))
			{
				ans.push_back({u,v});
				lst[x] = find(v);
			}
		}
	}
	for(auto x: ans)
		cout << x.first << " " << x.second << endl;
    return 0;
}