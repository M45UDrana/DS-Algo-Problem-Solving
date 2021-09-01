#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mxn = 2e5+7;

ll bt[mxn];

void upt(int x)
{
	while(x < mxn)
	{
		bt[x]++;
		x += (x&-x);
	}
}

int get(int x)
{
	int res = 0;
	while(x > 0)
	{
		res += bt[x];
		x -= (x&-x);
	}
	return res;
}

int main()
{
	ll n, k; cin >> n >> k;
	vector<ll> v(n), cmp(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];
	v.push_back(0ll);
	for(int i = n-1; i >= 0; i--)
	{
		v[i] += v[i+1];
		cmp[i] = v[i];
	}
	sort(cmp.begin(),cmp.end());
	cmp.resize(unique(cmp.begin(),cmp.end())
			-cmp.begin());
	ll ans = 0;
	for(int i = 0; i < n; i++)
	{
		int idx = lower_bound(cmp.begin(),cmp.end(), 
				v[i]) - cmp.begin();
		upt(idx+1);
		idx = lower_bound(cmp.begin(),cmp.end(), 
				v[i+1]+k) - cmp.begin();
		ans += get(idx);
	}
	cout << ans << endl;

    return 0;
}