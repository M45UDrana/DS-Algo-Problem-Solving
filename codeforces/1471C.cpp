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
		int n, m; cin >> n >> m;
		ll idx[m];
		memset(idx, 0, sizeof(idx));
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			x--;
			idx[x]++;
		}

		ll cst[m];
		for(int i = 0; i < m; i++)
			cin >> cst[i];
		ll ans = 0, cvr = 0;

		for(int i = 0; i < m and cvr < n; i++)
		{
			ans += cst[i];
			cvr++;
			for(int j = 0; j < idx[i] and cvr < n; j++)
			{
				ans += cst[i];
				cvr++;
			}
		}
		cout << ans << endl;

	}
	return 0;
}