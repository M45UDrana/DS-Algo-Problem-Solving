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
        ll n, k; cin >> n >> k;
        ll mx = (ll)-1e9;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for(int i = 0; i < n; i++)
            a[i] = mx - a[i];
        k--;
        if(k%2)
        {
            mx = (ll)-1e9;
            for(int i = 0; i < n; i++)
                mx = max(mx, a[i]);
            for(int i = 0; i < n; i++)
                a[i] = mx - a[i];
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}