#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	map<ll,int> mp;
	mp[0] = 1;

	ll sum = 0, ans = 0;
	for(int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		sum += x;
		if(mp[sum])
		{
			ans++;
			mp.clear();
			sum = x;
			mp[0] = 1;
		}
		mp[sum] = 1;
	}
	cout << ans << endl;
    return 0;
}