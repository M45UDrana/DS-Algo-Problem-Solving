#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, m; cin >> n >> m;

	vector<pair<int,int> > ans;
	for(int i = 2; i <= n; i++)
		ans.push_back({1,i});

	for(int i = 2; i <= n and ans.size() < m; i++)
	{
		for(int j = i+1; j <= n and ans.size() < m; j++)
		{
			if(__gcd(i, j) == 1)
				ans.push_back({i, j});
		}
	}

	if(ans.size() < m or m < n-1)
		cout << "Impossible" << endl;
	else
	{
		cout << "Possible" << endl;
		for(int i = 0; i < m; i++)
			cout << ans[i].first << " " << ans[i].second
			   	<< "\n";
	}
    return 0;
}