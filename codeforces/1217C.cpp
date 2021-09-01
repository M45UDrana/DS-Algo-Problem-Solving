#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int n = s.size(), ans = 0;

		ll binp = 1, cur = 0, len = 1, dlen = 0;
		for(int i = n-1; i >= 0; i--)
		{
			if(s[i] == '1')
			{
				while(dlen)
				{
					cur /= 2;
					len--;
					dlen--;
				}
				cur += binp;
			}
			ll tcur = cur, tlen = len;
			while(tcur)
			{
				if(tcur == tlen)
					ans++;
				tcur /= 2;
				tlen--;
			}
			if(binp <= n*2)
				binp *= 2;
			else dlen++;

			len++;
		}
		cout << ans << endl;
	}
	return 0;
}