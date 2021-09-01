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

ll binS(ll n, ll l, ll r)
{
    while(l < r)
    {
        ll m = (l+r)/2;
        ll a = (m*(m-1))/2;
        if(a >= n)
            r = m;
        else l = m+1;
    }
    return r;

}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        string s(n, 'a');
        ll l = binS(k, 1, n);
        ll r = l-1;
        r = k - ((r*(r-1))/2);
        s[n-l] = 'b';
        s[n-r] = 'b';
        cout << s << endl;
    }
    return 0;
}