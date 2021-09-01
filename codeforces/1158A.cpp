#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, m; cin >> n >> m;
	ll a[n], b[m], ans = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		ans += a[i]*m;
	}

	for(int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	if(a[n-1] > b[0])
		return !(cout << -1 << endl);

	for(int i = 1; i < m; i++)
		ans += b[i]-a[n-1];
	if(a[n-1] != b[0])
		ans += b[0]-a[n-2];
	cout << ans << endl;
    return 0;
}