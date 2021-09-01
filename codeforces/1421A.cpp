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

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int m = 1, ans = 0;
        while(a or b)
        {
            int x = a&1, y = b&1;
            if(x != y)
                ans += m;
            a >>= 1;
            b >>= 1;
            m *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}