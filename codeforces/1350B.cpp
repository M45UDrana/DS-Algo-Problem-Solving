#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        int dp[n+1], ans = 0;
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; i*j <= n; j++)
            {
                if(a[i] < a[j*i])
                    dp[i*j] = max(dp[i*j], dp[i]+1);
            }
            ans = max(dp[i], ans);
        }
        cout << ans+1 << endl;
    }
    return 0;
}