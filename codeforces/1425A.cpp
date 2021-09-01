#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll ans = 0, m = n, flg = 0;
		if(n%2)
		{
			flg++;
			n--;
			m--;
		}
		while(n > 0)
		{
			if(n%2)
			{
				ans++;
				n--;
				n /= 2;
			}
			else 
			{
				if((n/2)%2 or n == 4)
				{
					ans += n/2;
					n /= 2;
					n--;
				}
				else 
				{
					ans++;
					n -= 2;
				}
			}
		}
		if(flg)
			cout << (m-ans)+flg << endl;
		else 
			cout << ans << endl;
	}
    return 0;
}