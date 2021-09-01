#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e18;

int main()
{
    IO;
	vector<pair<ll,int>> v;
	ll sum = 0, a = 205;
	while(a <= inf/10)
	{
		a *= 10;
		sum = a;
		for(int i = 1; sum <= inf and i < 10; i++, sum += a)
			v.pb(mp(sum, i));
	}
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll n; cin >> n;
		int ans = 0;
		for(int i = (int)v.size()-1; i >= 0; i--)
		{
			while(n >= v[i].ff)
			{
				ans += v[i].ss;
				n -= v[i].ff;
			}
		}
		if(n)
			cout << "-1" << endl;
		else cout << ans << endl;
	}
	return 0;
}