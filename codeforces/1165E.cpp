#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll md = 998244353;

int main()
{
	ll n; cin >> n;
	vector<ll> a(n), b(n);

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] *= (n-i)*(i+1);
	}
	for(int i = 0; i < n; i++)
		cin >> b[i];

	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());

	ll ans = 0;
	for(int i = 0; i < n; i++)
		(ans += (a[i]%md * b[i]%md )%md) %= md;
	cout << ans << endl;

    return 0;
}