#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll md = 998244353;

ll poW(ll base, ll p)
{
	if(p == 1)
		return base;
	ll res = 1;
	if(p == 0)
		return res;
	if(p&1)
	{
		res = poW(base, (p-1)/2);
		res = ((res*res)%md * base)%md;
	}
	else
	{
		res = poW(base, p/2);
		(res *= res)%=md;
	}

	return res%md;
}

int main()
{
	int n, m; cin >> n >> m;
	string a, b; cin >> a >> b;
	ll pre[m];
	memset(pre, 0, sizeof(pre));

	for(int i = 0; i < m; i++)
	{
		if(b[i] == '1')
			pre[i] = 1;
		if(i)
			pre[i] += pre[i-1];
	}
	
	ll ans = 0;

	for(int i = n-1, j = m-1, k = 0; i >= 0 and 
			j >= 0;i--,j--, k++)
	{
		if(a[i] == '1')
			(ans += (poW(2, k) * pre[j])%md) %= md;
	}
	cout << ans << endl;
    return 0;
}