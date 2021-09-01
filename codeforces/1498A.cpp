#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

ll dig(ll n)
{
	ll x = 0;
	while(n)
	{
		x += n%10;
		n /= 10;
	}
	return x;
}

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll n; cin >> n;
		while(__gcd(n, dig(n)) == 1)
			n++;
		cout << n << endl;
	}
	return 0;
}