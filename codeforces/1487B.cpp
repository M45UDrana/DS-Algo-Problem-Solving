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
	int Case; cin >> Case;
	while(Case--)
	{
		ll n, i; cin >> n >> i;
		if(n%2)
		{
		ll x = n/2;
		ll m = i % (n*x);
		if(!m)
			m = n*x;
		ll y = m/x;
		if(m%x == 0)
			y--;
		ll ans = (m+y)%n;
		if(!ans)
			ans = n;
		cout << ans << endl;
		}
		else 
		{
			i %= n;
			if(!i)
				i = n;
			cout << i << endl;
		}
	}
		return 0;
}