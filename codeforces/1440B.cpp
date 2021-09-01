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
 
const int N = 2000;

int main()
{
    IO;
	int t; cin >> t;
	while(t--)
	{
		ll n, k; cin >> n >> k;
		ll a[n*k+1];
		for(int i = 1; i <= n*k; i++)
			cin >> a[i];
		ll ans = 0, md = (n+1)/2;
		int j = n-md+1;
		for(int i = (md-1)*k+1; i <= n*k; i+=j)
		{
			ans += a[i];
		}
		cout << ans << endl;
	}
	return 0;
}