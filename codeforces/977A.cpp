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
    ll n, q; cin >> n >> q;
    while(q--)
    {
        if(n%10 == 0)
            n/=10;
        else n--;
    }
    cout << n << endl;
    return 0;
}