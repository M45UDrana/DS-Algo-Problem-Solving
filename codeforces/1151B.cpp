#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[501][501];

int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> a[i][j];
	int x = 0;
	for(int i = 1; i <= n; i++)
		x ^= a[i][1];
	if(x)
	{
		cout << "TAK" << endl;
		for(int i = 1; i <= n; i++)
			cout << 1 << " \n"[i==n];
		return 0;
	}

	for(int i = 1; i <= n; i++)
	{
		x ^= a[i][1];
		for(int j = 2; j <= m; j++)
		{
			x ^= a[i][j];
			if(x)
			{
				cout << "TAK" << endl;
				for(int k = 1; k <= n; k++)
				{
					if(k == i)
						cout << j << " \n"[k==n];
					else 
						cout << 1 << " \n"[k==n];
				}
				return 0;
			}
			x ^= a[i][j];
		}
		x ^= a[i][1];
	}

	cout << "NIE" << endl;
    return 0;
}