#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int mp[101],cnt = 0;
		memset(mp, 0, sizeof(mp));

		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x]++;
			if(mp[x] == 1)
				cnt++;
		}

		if(k == 1 and cnt > 1)
			cout << -1 << endl;
		else
		{
			int ans = 0, ok = 1;
			while(cnt > 0)
			{
				cnt -= k;
				ans++;
				if(ok)
				{
					k--;
					ok = 0;
				}
			}
			cout << ans << endl;
		}
	}

    return 0;
}