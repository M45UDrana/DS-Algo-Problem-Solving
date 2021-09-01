#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		string s; cin >> s;
		vector<int> cnt;
		bool ok = false;
		int cntw = 0, cntl = 0, ans = 0;

		for(int i = 0; i < n; i++)
		{
			if(s[i] == 'W')
				ok = true;

			if(s[i] == 'W')
			{
				cntw++;
				if(ok and cntl)
					cnt.push_back(cntl);
				cntl = 0;
			}

			if(s[i] == 'L' or i+1 == n)
			{
				if(ok)
					cntl++;
				ans += max(0, (cntw*2)-1);
				cntw = 0;
			}
		}

		sort(cnt.begin(), cnt.end());
		int i = 0, m = cnt.size();
		while(i < m and k)
		{
			if(cnt[i] >= k)
			{
				ans += k*2;
				if(cnt[i] == k)
					ans++;
				k = 0;
			}
			else 
			{
				ans += cnt[i]*2+1;
				k -= cnt[i];
			}
			i++;
		}
		i = 0;
		int fl = 0;
		while(i < n and s[i++] == 'L')
			fl++;

		int j = n-1;
		while(j >= i and s[j--] == 'L')
			fl++;
		if(k and fl)
		{
			ans += min(fl, k)*2;
			if(!ok)
				ans--;
		}

		cout << ans << endl;
	}
    return 0;
}