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

const int N = 1e5+7;

int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll n, h, w; cin >> h >> w >> n;
		ll cnth = 1, cntw = 1;
		while(h%2 == 0 or w%2 == 0)
		{
			if(h%2 == 0)
			{
				h /= 2;
				cnth += cnth;
			}
			if(w%2 == 0)
			{
				w /= 2;
				cntw += cntw;
			}
		}
		if(cnth*cntw >= n)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}