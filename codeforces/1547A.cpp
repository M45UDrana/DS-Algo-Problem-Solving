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
		int xa, ya, xb, yb, xf, yf;
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		int ans = abs(xa-xb)+abs(ya-yb);
		if(xa == xb and xa == xf)
		{
			if(ya < yf and yf < yb)
				ans += 2;
			else if(yb < yf and yf < ya)
				ans += 2;
		}
		else if(ya == yb and ya == yf)
		{
			if(xa < xf and xf < xb)
				ans += 2;
			else if(xb < xf and xf < xa)
				ans += 2;
		}
		cout << ans << endl;
	}
	return 0;
}