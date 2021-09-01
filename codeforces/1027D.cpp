#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+5;

int root[N];

int find(int x)
{
	if(root[x] != x) root[x] = find(root[x]);
	return root[x];
}

int main()
{
	int n; cin >> n;
	int a[n+1], cst[n+1];
	for(int i = 1; i <= n; i++)
	{
		cin >> cst[i];
		root[i] = i;
	}

	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
		root[find(i)] = find(a[i]);

	bool used[n+1];
	memset(used, 0, sizeof(used));

	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		int x = find(i);
		if(used[x])
			continue;
		used[x] = 1;
		int c = cst[x];
		int y = a[x];
		while(y != x)
		{
			c = min(cst[y], c);
			y = a[y];
		}
		ans += c;
	}
	cout << ans << endl;
    return 0;
}