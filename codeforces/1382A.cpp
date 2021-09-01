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
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[1001];
        memset(a, 0, sizeof(a));
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a[x]++;
        }
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            int x; cin >> x;
            if(!ans)
            {
                if(a[x])
                    ans = x;
            }
        }
        if(ans)
            cout << "YES" << endl << 1 << " " << ans << endl;
        else cout << "NO" << endl;
    }
    return 0;
}