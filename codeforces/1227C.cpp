#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		string s; cin >> s;

		vector<int> v;
		for(int i = 1; i < k; i++)
		{
			v.push_back(0);
			v.push_back(1);
		}

		int m = n - (k-1)*2;

		for(int i = 1; i <= m; i++)
		{
			if(i <= m/2)
				v.push_back(0);
			else v.push_back(1);
		}

		vector<int> idx[2];

		for(int i = n-1; i >= 0; i--)
		{
			if(s[i] == '(')
				idx[0].push_back(i);
			else idx[1].push_back(i);
		}

		vector<pair<int,int>>ans;
		for(int i = 0; i < n; i++)
		{
			int x = v[i];
			int value = idx[x].back();
			idx[x].pop_back();;

			if(value != i)
			{
				ans.push_back(make_pair(i, value));
				x ^= 1;
				for(int j = idx[x].size()-1; j >= 0; j--)
				{
					if(idx[x][j] < value)
					   idx[x][j]++;
					else break;
				}
			}
		}
		cout << ans.size() << endl;
		for(int i = 0; i < ans.size(); i++)
		{
			cout << ans[i].first+1 << " " << ans[i].second+1
				<< endl;
		}

	}

	return 0;
}