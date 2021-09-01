#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e9;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll n; cin >> n;
		ll m = n/2;
		ll sq = sqrt(m);
		if(sq*sq == m and m*2 == n)
		{
			cout << "YES" << endl;
			continue;
		}
		m = n/4;
		sq = sqrt(m);
		if(sq*sq == m and m*4 == n)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}