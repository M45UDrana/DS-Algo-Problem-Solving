#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;
	int a[n][m], b[n][m];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> b[i][j];

	bool ok = true;
	for(int i = 0; i < n; i++)
	{
		map<int,int>mp;
		int x = i, y = 0;
		while(x >= 0 and y < m)
		{
			mp[a[x][y]]++;
			mp[b[x][y]]--;
			x--; y++;
		}
		for(auto j: mp)
			ok &= (j.second==0);
	}
	
	for(int i = 1; i < m; i++)
	{
		map<int,int>mp;
		int x = n-1, y = i;
		while(x >= 0 and y < m)
		{
			mp[a[x][y]]++;
			mp[b[x][y]]--;
			x--; y++;
		}
		for(auto j: mp)
			ok &= (j.second==0);
	}
	if(ok)
		cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;
}