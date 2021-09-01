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
		ll a[n+1], b[n+1];
		a[0] = 0; b[0] = 0;
		for(int i = 1; i <= n; i++)
			cin >> a[i] >> b[i];
		ll tm[n];
		for(int i = 1; i <= n; i++)
			cin >> tm[i];
		ll cur = 0, ans = 0;
		for(int i = 1; i <= n; i++)
		{
			cur += a[i] - b[i-1] + tm[i];
			ans = cur;
			cur += (b[i]-a[i]+2-1)/2;
			cur = max(cur, b[i]);
		}
		cout << ans << endl;
	}
	return 0;
}