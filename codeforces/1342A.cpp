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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans = abs(abs(x - 0LL) - abs(y - 0LL)) * a;
        ans += min(abs(x - 0LL),  abs(y - 0LL)) * b;
        ll ans2 = (abs(x-0LL) + abs(y-0LL)) * a;
        cout << min(ans, ans2) << endl;
    }
    return 0;
}