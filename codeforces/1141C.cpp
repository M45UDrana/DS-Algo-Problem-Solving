#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int n; cin >> n;
	ll x = 0, a[n], mn = n;
	for(int i = 0; i < n-1; i++)
	{
		cin >> a[i];
		ll y = x;
		x += a[i];
		a[i] = y;
		mn = min(a[i], mn);
	}
	mn = min(x, mn);
	a[n-1] = x;

	int used[n+1];
	memset(used, 0, sizeof(used));
	mn = 1-mn;

	for(int i = 0; i < n; i++)
	{
		a[i] += mn;
		if(a[i] > n or used[a[i]])
			return !(cout << -1 << endl);
		used[a[i]] = 1;
	}

	for(int i = 0; i < n; i++)
		cout << a[i] << " \n"[i+1==n];

    return 0;
}