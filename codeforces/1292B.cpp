#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define ff first
#define ss second

int main()
{
	ll x, y, ax, ay, bx, by;
	cin >> x >> y >> ax >> ay >> bx >> by;
	ll xs, ys, t;
	cin >> xs >> ys >> t;
	vector<pair<ll,ll> > v;

	v.push_back(make_pair(x,y));
	ll tt = ll(1e16);
	while(tt > 0)
	{
		ll x1 = x*ax+bx, y1 = y*ay+by;
		tt -= (x1-x)+(y1-y);
		v.push_back(make_pair(x1,y1));
		x = x1; y = y1;
	}


	int ans = 0;
	int n = v.size();
	for(int i = 0; i < n; i++)
	{
		int l = n+5, r = -1, j = i;
		tt = t; x = xs, y = ys;

		while(j >= 0 and abs(x-v[j].ff)+abs(y-v[j].ss) 
				<= tt)
		{
			tt -= abs(x-v[j].ff)+abs(y-v[j].ss);
			x = v[j].ff; y = v[j].ss;
			l = min(l, j); r = max(r, j);
			j--;
		}
		j += 2;
		while(j < n and abs(x-v[j].ff)+abs(y-v[j].ss)
				<= tt)
		{
			tt -= abs(x-v[j].ff)+abs(y-v[j].ss);
			x = v[j].ff; y = v[j].ss;
			l = min(l, j); r = max(r, j);
			j++;
		}
		if(l <= r)
			ans = max(ans, r-l+1);
	}
	cout << ans << endl;
    return 0;
}