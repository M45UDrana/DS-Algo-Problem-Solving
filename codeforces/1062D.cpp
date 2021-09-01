#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, ans = 0; cin >> n;

	for(ll i = 2; i <= n; i++)
	{
		for(ll j = i*2; j <= n; j += i)
			ans += (j/i) * 4;
	}
	cout << ans << endl;
    return 0;
}