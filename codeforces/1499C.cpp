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
		int n; cin >> n;
		vector<ll> v(n);
			for(int i = 0; i < n; i++)
				cin >> v[i];
		ll up = 0, rt = 0, m1 = n, m2 = n, 
		   ans = ll(1e18), mnu = v[0], mnr = v[1];
		for(int i = 0; i < n; i++)
		{
			if(i%2)
			{
				rt += v[i];
				m2--;
				mnr = min(mnr, v[i]);
				ans = min(ans, up+rt+mnu*m1+mnr*m2);
			}
			else
			{
				up += v[i];
				m1--;
				mnu = min(mnu, v[i]);
				ans = min(ans, up+rt+mnu*m1+mnr*m2);
			}
		}
		cout << ans << endl;
	}
	return 0;
}