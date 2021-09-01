#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    k++;
    if(k <= n)
        return !(cout << k << " " << 1 << endl);
    k -= n;
    ll x = (k+m-2)/(m-1);
    x = n+1-x;
    ll y = k%(m-1);
    if(!y)
        y = m-1;
    if(x%2)
        y = m+1-y;
    else y++;
    cout << x << " " << y << endl; 
    return 0;
}