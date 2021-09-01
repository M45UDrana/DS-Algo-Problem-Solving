#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);

		ll i = 0, j = n-1;
		ll x = a[i]*a[j];
		bool ok = true;

		while(i <= j)
		{
			if(a[i]*a[j] != x)
				ok = false;
			i++; j--;
		}

		ll sq = sqrt(x)+0.5;
		ll cnt = 0;
		for(int i = 2; i <= sq; i++)
		{
			if(i == x)
				continue;
			if(x%i == 0)
			{
				cnt++;
				if(x/i != i)
					cnt++;
			}
		}
		if(cnt != n)
			ok = false;
		if(ok)
			cout << x << endl;
		else cout << -1 << endl;
	}
    return 0;
}