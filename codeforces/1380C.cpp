#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, x; cin >> n >> x;
		vector<ll> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];

		sort(a.rbegin(),a.rend());

		int ans = 0;
		for(int i = 0, cnt = 0; i < n; i++)
		{
			cnt++;
			if(a[i]*cnt >= x)
			{
				ans++;
				cnt = 0;
			}
		}
		cout << ans << endl;
	}
    return 0;
}