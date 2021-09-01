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
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll n; cin >> n;
		ll x = 1, ans = 0;
		while(x*10 <= n)
		{
			ans += 9;
			x *= 10;
		}
		for(ll i = 1, m; i <= 9; i++)
		{
			x = n, m = 0;
			while(x)
			{
				x/=10;
				m = (m*10)+i;
			}
			if(n >= m)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}