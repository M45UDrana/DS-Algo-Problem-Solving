#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll md = 1e9+7;

int main()
{
    IO;
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		ll n; cin >> n;
		ll v[n+1];
		for(int i = 1; i <= n; i++)
			cin >> v[i];
		map<ll,ll> M[n+1];
		M[1][v[1]] = 1;
		for(int i = 1; i < n; i++)
		{
			for(auto x : M[i])
			{
				(M[i+1][v[i+1]] += x.ss) %= md;
				if(x.ff)
					M[i+1][v[i+1]+x.ff] = x.ss;
			}
			M[i].clear();
		}
		ll ans = 0;
		for(auto x : M[n])
			(ans += x.ss) %= md;
		cout << ans << endl;
	}
	//As we see, clearly a O(n2logn) solution is
	//going to be TLE.
	return 0;
}