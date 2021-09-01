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
		ll a, b; cin >> a >> b;
		ll ans = -1;
		for(ll i = 0; i <= 30; i++)
		{
			ll x = b+i;
			for(ll j = 1; j <= 30; j++)
			{
				ll y = pow(x, j);
				if(y > a)
				{
					if(ans == -1)
						ans = i+j;
					else ans = min(i+j, ans);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}