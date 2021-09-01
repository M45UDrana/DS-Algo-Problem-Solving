#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll md = 1e9+7;
ll bigmd(ll b, ll p)
{
	if(p == 1)
		return b;
	ll res = ll(pow(b, p/2))%md;
	if(p%2)
		return ((res*res)%md * b)%md;
	else return (res*res)%md;
}

int main()
{
	ll n, I; cin >> n >> I;
	ll a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	ll d = (I*8)/n;
	d = bigmd(2, d);

	ll ans = 1, l = 0, k = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] != a[i-1])
			k++;
		while(k > d)
		{
			if(a[l] != a[l+1])
				k--;
			l++;
		}
		ans = max(ans, i-l+1);
	}
	cout << n - ans << endl;


    return 0;
}