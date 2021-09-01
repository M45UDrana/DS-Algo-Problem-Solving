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
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll n; cin >> n;
		ll a[n];
		ll mx  = 0, idx = 0, sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];

			if(a[i] > mx)
			{
				mx = a[i];
				idx = i;
			}
		}
		
		ll mxn[n], smx = 0;
		for(int i = 0; i < n; i++)
		{
			if(i != idx)
			{
				mxn[i] = mx;
				smx = max(smx, a[i]);
			}
		}
		mxn[idx] = smx;

		ll ans = 0;
		for(int i = 0; i < n; i++)
		{
			ll u = ((sum+n-2)/(n-1)) * (n-1);
			ll v = mxn[i]*(n-1);
			ll ned = max(u, v) - sum;

			ans += ned;
			sum += ned;
		}
		cout << ans << endl;

	}
	return 0;
}