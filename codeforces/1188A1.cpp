#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int deg[n+1];
	memset(deg, 0, sizeof(deg));

	for(int i = 1; i < n; i++)
	{
		int u, v; cin >> u >> v;
		deg[u]++; deg[v]++;
	}
	for(int i = 1; i <= n; i++)
	{
		if(deg[i] == 2)
			return !(cout << "NO" << endl);
	}
	cout << "YES" << endl;
    return 0;
}