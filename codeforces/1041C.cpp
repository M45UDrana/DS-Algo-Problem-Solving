#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int lst[200005];
ll res[200005];

int find(int i)
{
	if(lst[i] != i) 
		return lst[i] = find(lst[i]);
	return lst[i];
}

int main()
{
	for(int i = 0; i < 200005; i++)
		lst[i] = i;

	ll n, m, d; cin >> n >> m >> d;
	ll a[n];
	memset(res, 0, sizeof(res));
	vector<pair<ll,ll> > v(n);

	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		v[i] = make_pair(a[i],i);
	}

	sort(v.begin(), v.end());

	int k = 1;
	for(int i = 0; i < n; i++)
	{
		int j = v[i].second;
		if(res[j])
			continue;

		res[j] = k;
		lst[i] = i+1;
		ll x = v[i].first+1+d;
		while(j < n)
		{
			j = lower_bound(v.begin(),v.end(),
					make_pair(x,0ll))-v.begin();
			j = find(j);
			if(j < n)
			{
				res[v[j].second] = k;
				lst[j] = j+1;
				x = v[j].first+1+d;
			}
		}
		k++;
	}
	cout << k-1 << endl;
	for(int i = 0; i < n; i++)
		cout << res[i] << " \n"[i+1==n];
	return 0;
}