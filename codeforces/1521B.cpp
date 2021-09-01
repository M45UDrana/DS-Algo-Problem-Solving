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
		pair<ll,int> p;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(i)
			{
				if(p.ff > a[i])
					p = mp(a[i], i);
			}
			else
				p = mp(a[i], i);
		}
		cout << n-1 << endl;
		ll cur = p.ff+1, pre = 1;
		for(int i = 0; i < n; i++)
		{
			if(i == p.ss)
				continue;

			cout << __gcd(p.ff, cur) << endl;
			while(__gcd(p.ff, cur) != 1 or
					__gcd(pre, cur) != 1)
				cur++;
			cout << i+1 << " ";
			d(p.ss+1, cur, p.ff);
			pre = cur;
			cur++;
		}
	}
	return 0;
}