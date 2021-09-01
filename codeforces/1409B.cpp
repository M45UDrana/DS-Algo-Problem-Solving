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
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b, x, y, n; 
        cin >> a >> b >> x >> y >> n;
        ll a1 = max(a-n, x), b1 = max(b-n, y);
        if(a1 < b1)
        {
            n -= a-a1;
            b = max(b-n, y);
            cout << a1*b << endl;
        }
        else
        {
            n -= b-b1;
            a = max(a-n, x);
            cout << a*b1 << endl;
        }
    }
    return 0;
}