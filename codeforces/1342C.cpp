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
        ll a, b, q; cin >> a >> b >> q;
        ll ab = a * b;
        while(q--)
        {
            ll l, r; cin >> l >> r;
            ll dl = l / ab;
            ll dr = r / ab;
            ll rl = l%ab;
            ll rr = r%ab;

            ll cntl = (ab - max(a, b)) * dl;
            ll cntr = (ab - max(a, b)) * dr;
            cntl += max(rl+1 - max(a, b), 0LL);
            cntr += max(rr+1 - max(a, b), 0LL);
            if(((l%a)%b) != ((l%b)%a))
                cout << (cntr - cntl) + 1 << " ";
            else cout << cntr - cntl << " ";
        }
        cout << endl;
    }
    return 0;
}