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
		ll n, x; cin >> n >> x;
		ll mx = 0, mn = 0, sum = 0;
		for(int i = 0; i < n; i++)
		{
			ll num; cin >> num;
			mx += (num+x-1)/x;
			mn += num/x;
			sum += num%x;
		}
		mn += (sum+x-1)/x;
		cout << mn << " " << mx << endl;
	}
	return 0;
}