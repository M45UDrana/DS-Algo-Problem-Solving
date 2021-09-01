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
    IO;
    int t; cin >> t;
    while(t--)
    {
		ll n; cin >> n;
		int ans = 1;
		while(((ans*ans)+ans)/2 < n)
			ans++;
		ll m = ((ans*ans)+ans)/2;

		for(ll i = ans;i >= 1; i--)
		{
			if(m - (i+1) >= n) 
				m -= (i+1);
		}

		cout << ans + ll((m+1-n)/2) << endl;
	}
	return 0;
}