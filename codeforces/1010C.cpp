#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll n, k; cin >> n >> k;
	ll g;
	for(int i = 0; i < n; i++)
	{
		ll x; cin >> x;
		x %= k;
		if(i)
			g = __gcd(g, x);
		else g = x;
	}
	ll a[k];
	memset(a, 0, sizeof(a));
	ll i = 1;
	while(!a[(g*i)%k])
	{
		a[(g*i)%k] = 1;
		i++;
	}
	vector<int> ans;
	for(int i = 0; i < k; i++)
		if(a[i])
			ans.push_back(i);
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << " \n"[i+1==ans.size()];
    return 0;
}