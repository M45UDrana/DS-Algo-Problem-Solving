#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define PI 3.14159265
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
        int n, x, m; cin >> n >> x >> m;
        int c, d, lft = n+1, rght = 0;
        bool ok = false;
        for(int i = 0; i < m; i++)
        {
            cin >> c >> d;
            if(c <= x and x <= d and !ok)
            {
                ok = true;
                lft = c; rght = d;
            }
            if(ok and c <= rght and d >= lft)
            {
                lft = min(lft, c);
                rght = max(rght, d);
            }
        }
        cout << max(1, (rght+1)-lft) << endl;
    }
    return 0;
}