#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n; cin >> n;
	ll a[n], b[n];
	vector<pair<ll, ll> > v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		v[i].first = b[i]-a[i];
		v[i].second = i;
	}

	sort(v.begin(),v.end());
	long long sum = 0;
	for(ll i = 0; i < n; i++)
	{
		sum += (a[v[i].second] * i) + (b[v[i].second] *
				(n-1-i));
	}
	cout << sum << endl;

    return 0;
}