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
	ll mn[10], mx[10];
	ll x = 1, y;
	for(int i = 1; i < 10; i++)
	{
		mn[i] = x;
		x *= 10;
		mx[i] = x-1;
	}
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll a, b, c; cin >> a >> b >> c;
		bool ok = false;
		for(ll i = mn[c]; i <= mx[c]; i++)
		{
			x = ((mn[a]+i-1)/i)*i;
			y = ((mn[b]+i-1)/i)*i;
			for(; x <= mx[a]; x += i)
			{
				for(; y <= mx[b]; y += i)
				{
					if(__gcd(x,y) == i)
					{
						d(x,y,"");
						ok = true;
						break;
					}
				}
				if(ok)
					break;
			}
			if(ok)
				break;
		}
	}
	return 0;
}