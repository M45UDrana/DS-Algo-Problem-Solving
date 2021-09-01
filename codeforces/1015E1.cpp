#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	string s[n], g[n];
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
		g[i] = string(m, '.');
	}
	vector<int> xst,yst,szst;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(s[i][j] == '.')
				continue;

			int k = j;
			while(k+1 < m and s[i][k+1] == '*')
				k++;
			int sz = k-j;

			k = j;
			while(k-1 >= 0 and s[i][k-1] == '*')
				k--;
			sz = min(sz, j-k);

			k = i;
			while(k+1 < n and s[k+1][j] == '*')
				k++;
			sz = min(sz, k-i);

			k = i;
			while(k-1 >= 0 and s[k-1][j] == '*')
				k--;
			sz = min(sz, i-k);

			if(sz)
			{
				g[i][j] = '*';
				xst.push_back(i+1);
				yst.push_back(j+1);
				szst.push_back(sz);
				for(int l = 1; l <= sz; l++)
				{
					g[i][j+l] = '*';
					g[i][j-l] = '*';
					g[i+l][j] = '*';
					g[i-l][j] = '*';
				}
			}
		}
	}

	bool ok = true;
	for(int i = 0; i < n; i++)
		ok &= (s[i] == g[i]);
	if(ok)
	{
		cout << xst.size() << endl;
		for(int i = 0; i < xst.size(); i++)
			cout << xst[i] << " " << yst[i] << " "
				<< szst[i] << endl;
	}
	else cout << -1 << endl;

    return 0;
}