#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll md = 1e9+7;
const int N = 1e5+3;

vector<int> adj[N];
bool visit[N];

ll dfs(int u)
{
	if(visit[u])
		return 0;
	visit[u] = true;
	ll x = 1;
	for(int i = 0; i < adj[u].size(); i++)
		x += dfs(adj[u][i]);
	return x;
}

int main()
{
	ll n, k; cin >> n >> k;
	ll ans = 1;

	for(int i = 0; i < k; i++)
		(ans *= n) %= md;
	ans -= n;
	if(ans < 0)
		(ans += md) %= md;

	for(int i = 1; i < n; i++)
	{
		int x, y, k; cin >> x >> y >> k;
		if(!k)
		{
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
	}

	for(int i = 1; i <= n; i++)
	{
		if(!visit[i])
		{
			ll x = dfs(i);

			ll rd = 1;
			for(int i = 0; i < k; i++)
				(rd *= x) %= md;
			rd -= x;
			if(rd < 0)
				(rd += md) %= md;

			ans -= rd;
			if(ans < 0)
				(ans += md) %= md;
		}
	}
	cout << ans << endl;
    return 0;
}