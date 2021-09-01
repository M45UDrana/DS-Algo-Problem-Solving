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
		ll a, b; cin >> a >> b;
		if(b == 1 or a%b == 0)
			cout << "NO" << endl;
		else
		{
			cout << "YES" << endl;
			d(a*(b-1), a, a*b);
		}
	}
	return 0;
}