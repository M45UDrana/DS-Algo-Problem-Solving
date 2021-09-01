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
		ll n, d; cin >> n >> d;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			bool ok = false;
			for(int i = 1; i <= 10 and d*i <= x; i++)
			{
				if((x-d*i)%10 == 0)
					ok = true;
			}
			if(ok or x >= d*10)
				cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}