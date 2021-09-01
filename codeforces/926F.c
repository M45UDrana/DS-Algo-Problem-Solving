#include <stdio.h>
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'

ll n, p, m; 

ll positive(ll rht, ll cur)
{
	ll lft = 0;
	while(lft < rht)
	{
		ll md = (lft+rht+1)/2;
		if(cur-(md*p) >= 0)
			lft = md;
		else rht = md-1;
	}
	return lft;
}

int main()
{
	scanf("%I64d%I64d%I64d", &n, &p, &m);
	ll d[n], t[n];
	for(int i = 0; i < n; i++)
		scanf("%I64d%I64d%", &d[i], &t[i]);
	ll ans = d[0]-1;
	ll cur = -1*ans*p;
	for(int i = 0; i < n; i++)
	{
		cur += t[i];
		if(i == n-1)
		{
			ll x = positive(m+1-d[i], cur);
			ans += (m+1-d[i])-x;
			break;
		}
		ll x = positive(d[i+1]-d[i], cur);

		ans += (d[i+1]-d[i]) - x;
		cur -= (d[i+1]-d[i])*p;
	}
	printf("%I64d", ans);
	return 0;
}