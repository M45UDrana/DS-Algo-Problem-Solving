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
		int n; cin >> n;
		int dp[n+1];
		memset(dp, 0, sizeof(dp));
		int ans = 0;

		for(int i = 1; i <= n; i++)
		{
			int x; cin >> x;
			if(i+x <= n)
				dp[i+x] = max(dp[i+x], dp[i]+x);
			ans = max(ans, dp[i]+x); 
		}
		cout << ans << endl;
	}
	return 0;
}