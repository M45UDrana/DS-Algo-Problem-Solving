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
    int n; cin >> n;
    ll l = 1, r = 9, ans = 0, d = 1;
    while(n)
    {
        if(n >= r)
        {
            ans += (r - l) * d;
            d++;
            l = r;
            r = r * 10 + 9;
        }
        else 
        {
            ans += (n - l) * d;
            break;
        }
    }
    if(n > 0) ans++;
    cout << ans << endl;
    return 0;
}