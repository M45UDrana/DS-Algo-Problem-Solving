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
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		cout << 0 << " ";
		ll cur = a[0];
		for(int i = 1; i < n; i++)
		{
			ll ans = 0;
			for(ll j = 0; j < 32; j++)
			{
				//d(((1<<j)&cur), ((1<<j)&a[i]), '#');
				if(((1<<j)&cur) != 0 and ((1<<j)&a[i]) == 0)
					ans |= (1<<j);
			}
			cout << ans << " ";
			cur = ans^a[i];
		}
		cout << endl;
	}
	return 0;
}