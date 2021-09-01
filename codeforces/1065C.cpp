#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
 
int main()
{
	ll n, k; cin >> n >> k;
	ll a[n], mn;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i)
			mn = min(mn, a[i]);
		else mn = a[i];
	}
	vector<ll> v(200005, 0);
	for(int i = 0; i < n; i++)
	{
		a[i] -= mn;
		v[a[i]]++;
	}
	for(int i = 200000; i > 0; i--)
		v[i] += v[i+1];
	
	int ans = 0;
	ll sum = 0;

	for(int i = 1; i <= 200000; i++)
	{
		if(sum + v[i] > k)
		{
			ans++;
			sum = 0;
		}
		sum += v[i];
	}
	if(sum)
		ans++;
	cout << ans << endl;
	return 0;
}