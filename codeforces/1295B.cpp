#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		string s; cin >> s;
		s = " "+s;
		int bal[n+1];
		bal[0] = 0;
		bool ok = false;
		for(int i = 1, cnt  = 0; i <= n; i++)
		{
			if(s[i] == '0')
				cnt++;
			else cnt--;
			bal[i] = cnt;
			if(bal[i] == x)
				ok = true;
		}

		if(bal[n] == 0)
		{
			if(ok)
				cout << -1 << endl;
			else cout << 0 << endl;
			continue;
		}

		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			if((x-bal[i])%bal[n] == 0 and
					(x-bal[i])/bal[n] >= 0)
				ans++;
		}
		cout << ans << endl;
	}
    return 0;
}