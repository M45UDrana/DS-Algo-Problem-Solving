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
        ll n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        ll neg = 0, ans = 0;
        for(int i = n-1; i >= 0; i--)
        {
            if(a[i] < 0)
                neg += abs(a[i]);
            else
            {
                ll x = min(neg, a[i]);
                neg -= x;
                a[i] -= x;
                ans += a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}