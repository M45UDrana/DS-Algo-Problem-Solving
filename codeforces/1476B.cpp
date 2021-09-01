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
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		int n; cin >> n;
		ll k; cin >> k;
		ll a[n], b[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
			if(i)
				b[i] += b[i-1];
		}
		ll ans = 0;
		for(int i = n-2; i >= 0; i--)
		{
			b[i] += ans;
			ll x = ll((a[i+1]*100ll+k-1)/k);
			ans += max(0ll, x - b[i]);
		}
		cout << ans << endl;
	}
	return 0;
}