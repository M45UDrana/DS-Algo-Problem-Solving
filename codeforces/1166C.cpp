#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n; cin >> n;
	vector<ll> v;
	for(int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		if(x < 0)
			x *= -1;
		if(x)
			v.push_back(x);
	}
	n = v.size();
	sort(v.begin(), v.end());

	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		ll x = v[i]*2;
		int j = upper_bound(v.begin(),v.end(), x) - 
			v.begin();
		ans += j-i-1;
	}
	cout << ans << endl;

    return 0;
}