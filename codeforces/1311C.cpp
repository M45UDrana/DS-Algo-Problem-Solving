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
        int n, m; cin >> n >> m;
        string s; cin >> s;
        s = " " + s;
        int pos[m];
        for(int i = 0; i < m; i++)
            cin >> pos[i];
        int a[n+1][26];
        mem(a, 0);
        for(int i = 1; i <= n; i++)
        {
            a[i][(int)s[i]-'a'] = 1;
            for(int j = 0; j < 26; j++)
                a[i][j] += a[i-1][j];
        }
        int ans[26];
        mem(ans, 0);
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < 26; j++)
                ans[j] += a[pos[i]][j];
        }
        for(int j = 0; j < 26; j++)
            ans[j] += a[n][j];
        for(int i = 0; i < 26; i++)
        {
            if(i == 0)
                cout << ans[i];
            else cout << " " << ans[i];
        }
        cout << endl;
    }
    return 0;
}