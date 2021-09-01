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
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		ll p, a, b, c; cin >> p >> a >> b >> c;
		ll pa = ll((p+a-1)/a) * a;
		ll pb = ll((p+b-1)/b) * b;
		ll pc = ll((p+c-1)/c) * c;
		cout << min({pa-p, pb-p, pc-p}) << endl;
	}
	return 0;
}