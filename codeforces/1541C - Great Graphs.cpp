#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);
 
 
int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		ll sum = 0, pre = 0;
		for(ll i = 1; i < n; i++)
		{
			pre += (a[i] - a[i-1]) * i;
			sum += pre;
		}
		cout << (sum - a[n-1]) * -1 << endl;
	}
	return 0;
}
