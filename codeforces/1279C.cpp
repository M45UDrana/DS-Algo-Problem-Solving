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
		int idx[n+1];
		memset(idx, 0, sizeof(idx));

		for(int i = 1; i <= n; i++)
		{
			int x; cin >> x;
			idx[x] = i;
		}
		ll ordr = 0, ans = 0;
		for(int i = 1; i <= m; i++)
		{
			int x; cin >> x;
			if(idx[x] <= ordr)
				ans++;
			else
			{
				ll p = (idx[x]-i);
				ans += p*2+1;
				ordr = idx[x];
			}
		}
		cout << ans << endl;
	}
	return 0;
}