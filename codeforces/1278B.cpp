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
 
ll src(ll d)
{
	ll lft = 0, rht = 1e5;
	while(lft < rht)
	{
		ll m = (lft+rht)/2;
		if((m*m+m)/2 >= d)
			rht = m;
		else lft = m+1;
	}
	return lft;
}

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll a, b; cin >> a >> b;
		ll d = abs(a-b);
		ll x = src(d);
		if((((x*x+x)/2)-d)%2 == 0)
			cout << x << endl;
		else 
		{
			x++;
			if((((x*x+x)/2)-d)%2 == 0)
				cout << x << endl;
			else cout << x+1 << endl;
		}
	}
	return 0;
}