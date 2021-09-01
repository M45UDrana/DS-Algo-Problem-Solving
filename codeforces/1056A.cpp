#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[101];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++)
	{
		int m; cin >> m;
		for(int j = 0, x; j < m; j++)
		{
			cin >> x;
			a[x]++;
		}
	}
	for(int i = 1; i <= 100; i++)
	{
		if(a[i] == n)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}