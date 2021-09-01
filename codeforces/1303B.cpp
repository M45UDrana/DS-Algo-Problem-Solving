#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, g, b; cin >> n >> g >> b;
        if( n <= g)
        {
            cout << n << endl;
            continue;
        }
        ll gd = (n+1)/2, bd = n - gd;
        ll rnd = gd / g;
        ll ans = (rnd*g) + ((rnd-1)*b);
        if(gd > (rnd*g))
        {
            ans += b;
            ans += (gd - (rnd*g));
        }
        n -= min(n, ans);
        
        cout << ans + n << endl;
    }
    return 0;
}