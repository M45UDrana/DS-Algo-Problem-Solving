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

const int oo = 1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        s = " " + s;
        int pre[n+1], suf[n+2];
        pre[0] = - oo; suf[n+1] = oo;
        for(int i = 1; i <= n; i++)
        {
            if(s[i] == '1')
                pre[i] = i;
            else pre[i] = pre[i-1];
        }
        for(int i = n; i > 0; i--)
        {
            if(s[i] == '1')
                suf[i] = i;
            else suf[i] = suf[i+1];
        }
        int dp[n+5];
        memset(dp, 0, sizeof(dp));
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i <= k and pre[i] < i-k and suf[i] > i+k)
                dp[i] = 1;
            else if(pre[i] < i-k and suf[i] > i+k)
                dp[i] = dp[i-(k+1)]+1;
            dp[i] = max(dp[i], dp[i-1]);
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
    return 0;
}