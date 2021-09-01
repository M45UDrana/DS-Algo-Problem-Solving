#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll md = 1e9+7;


ll Pow(ll base, ll ex)
{
	if(ex == 0)
		return 1;
	if(ex == 1)
		return base;

	ll mul = 1;
	if(ex%2)
		mul = base;
	
	ll res = Pow(base, ex/2);

	(mul *= (res * res) % md ) %= md;

	return mul;
}

int main()
{
	ll x, n; cin >> x >> n;

	vector<ll> prim;
	for(ll i = 2; i <= x; i++)
	{
		if(i*i > x)
		{
			prim.push_back(x);
			break;
		}

		if(x%i == 0)
		{
			prim.push_back(i);
			while(x%i == 0)
				x /= i;
		}
	}

	ll ans = 1;
	for(int i = 0; i < prim.size(); i++)
	{
		ll x = n, cnt = 0;

		while(x > 1)
		{
			cnt += x/prim[i];
			x /= prim[i];
		}

		(ans *= Pow(prim[i], cnt)) %= md;
	}

	cout << ans << endl;


	return 0;
}