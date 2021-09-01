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
 
int main()
{
	ll n, m; cin >> n >> m;
	ll mn = max(n - (m*2), 0LL);
	cout << mn << " ";
	if(!m)
		return !(cout << n << endl);
	for(ll i = 2; i <= n; i++)
	{
		if((i*i-i)/2 >= m)
		{
			cout << n-i << endl;
			break;
		}
	}
	return 0;
}