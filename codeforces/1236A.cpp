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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    int t, ans = 0; cin >> t;
    while(t--)
    {
        int a, b, c; cin >> a >> b >> c;
        while(c >= 2 && b >= 1)
        {
            ans += 3;
            c -= 2; b -= 1;
        }
        while(b >= 2 && a >= 1)
        {
            ans += 3;
            b -= 2; a -= 1;
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}