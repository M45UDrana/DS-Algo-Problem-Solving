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

ll cntd(ll x)
{
    ll minx = 11, maxx = -3;
    while(x)
    {
        minx = min(x%10, minx);
        maxx = max(x%10, maxx);
        x /= 10;
    }
    return minx*maxx;
}
int main()
{
    IO;
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        for(int i = 1; i < k; i++)
        {
            ll x = cntd(n);
            n += x;
            if(!x)
                break;
        }
        cout << n << endl;
    }
    return 0;
}