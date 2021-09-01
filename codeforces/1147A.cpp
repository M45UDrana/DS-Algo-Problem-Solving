#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	vector<int> v[n+1];
	for(int i = 1; i <= k; i++)
	{
		int x; cin >> x;
		v[x].push_back(i);
	}
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		if(v[i].size() == 0)
		{
			ans++;
			if(i > 1)
				ans++;
			if(i < n)
				ans++;
		}
		else
		{
			int x = v[i][0];
			if(i > 1)
			{
				int idx = lower_bound(v[i-1].begin(),
					v[i-1].end(),x) - v[i-1].begin();
				if(idx == v[i-1].size())
					ans++;
			}
			if(i < n)
			{
				int idx = lower_bound(v[i+1].begin(),
					v[i+1].end(), x) - v[i+1].begin();
				if(idx == v[i+1].size())
					ans++;
			}
		}
	}
	cout << ans << endl;
    return 0;
}