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

ll a, b;

bool f(ll x)
{  
    ll c = a-(x*2);
    ll d = b - x;
    if(d < 0 or c < 0)
        return false;
    return c >= (ll)d/2;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> a >> b;  
        if(a < b)
            swap(a, b);
        if(a == 0 or b == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ll left = 0, right = (ll)1e9;
        while(left < right)
        {
            ll mid = (left+right+1)/2;
            if(f(mid))
                left = mid;
            else right = mid-1;
        }
        ll ans = left + (b - left)/2; 
        cout << ans << endl;
    }
    return 0;
}