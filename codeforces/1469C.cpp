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
		ll n, k; cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		int mn = a[0], mx = a[0]+k-1;
		bool ok = true;
		for(int i = 1; i < n-1; i++)
		{
			if(mn > a[i]+k+k-2)
				ok = false;
			if(mx < a[i])
				ok = false;

			mn = max(mn-k+1, a[i]);
			mx = min(mx+k-1, a[i]+k+k-2);
		}
		if(mn > a[n-1]+k-1 or mx < a[n-1])
			ok = false;

		if(ok)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}