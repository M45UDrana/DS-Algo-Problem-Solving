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
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, pre, ad = 0, ans = 0; cin >> n;
        for(int i = 0; i < n; i++)
        {
            ll x; cin >> x;
            if(i)
            {
                x += ad;
                if(pre > x)
                {
                    ad += pre - x;
                    ans += pre - x;
                }
                else pre = x;
            }
            else pre = x;
        }
        cout << ans << endl;
    }
    return 0;
}