#include <bits/stdc++.h>

using namespace std;

int mindif(vector<int> a)
{
	int m = a.size(), d;
	for(int i = 0; i < m-1; i++)
	{
		if(i)
			d = min(a[m-1]-a[i], d);
		else d = a[m-1]-a[i];
	}
	return d;
}
int main()
{
	int n, m; cin >> m >> n;
	vector<vector<int>>v(n, vector<int>(m));
	vector<int> vte(m, 0), ans;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> v[i][j];
			vte[j] += v[i][j];
		}
	}

	int d = mindif(vte);

	bool used[n];
	memset(used, 0, sizeof(used));

	while(d > 0)
	{
		pair<int,int> idx = {-1,-1};
		for(int i = 0; i < n; i++)
		{
			if(!used[i])
			{
				int tmp_d;
				vector<int> tmp(m);
				for(int j = 0; j < m; j++)
				{
					tmp[j] = vte[j]-v[i][j];
				}
				tmp_d = mindif(tmp);

				if(idx.first == -1)
				{
					idx = {i, tmp_d};
				}
				else if(idx.second > tmp_d)
				{
					idx = {i, tmp_d};
				}
			}

		}

		for(int i = 0; i < m; i++)
			vte[i] -= v[idx.first][i];
		used[idx.first] = true;
		ans.push_back(idx.first);

		d = idx.second;
	}

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i]+1 << " \n"[i+1==ans.size()];

    return 0;
}