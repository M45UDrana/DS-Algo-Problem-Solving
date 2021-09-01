#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

ll digit(ll x)
{
	ll cnt = 0;
	while(x > 0)
	{
		cnt += x&1;
		x >>= 1;
	}
	return cnt;
}

int main()
{
    IO;
	int Case = 1;
    while(Case--)
    {
		ll n, p; cin >> n >> p;
		ll ans = -1;
		for(int i = 1; i < 40; i++)
		{
			ll x = n - (p*i);
			if(digit(x) <= i and digit(x) and x >= i)
			{
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}