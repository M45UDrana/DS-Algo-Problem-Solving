#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+7;

int main()
{
	int n; cin >> n;
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			char c; cin >> c;
			a[i][j] = c-'0';
			if(i != j and !a[i][j])
				a[i][j] = inf;
		}
	}
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
			}
		}
	}
	int m; cin >> m;
	int p[m];
	for(int i = 0; i < m; i++)
		cin >> p[i];
	vector<int> ans;
	ans.push_back(p[0]);
	int l = 0;
	for(int i = 1; i < m; i++)
	{
		if(a[p[l]][p[i]] < i-l)
		{
			ans.push_back(p[i-1]);
			l = i-1;
		}
		if(i+1 == m)
			ans.push_back(p[i]);
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << " \n"[i+1==ans.size()];
	return 0;
}