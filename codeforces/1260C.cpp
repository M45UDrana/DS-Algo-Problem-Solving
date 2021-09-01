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
    int n; cin >> n;
    while(n--)
    {
        ll r, b, k; cin >> r >> b >> k;
        ll lcm = (r*b) / __gcd(r,b);
        if(r>b) swap(r,b);
        if(__gcd(r,b) == 1)
        {
            if((b-1+r-1)/r >= k)
                cout <<"REBEL"<< endl;
            else cout << "OBEY" << endl;
            continue;
        }
        ll lcm1 = ((lcm/b)+1)*b;
        ll lcm2 = ((lcm/b)+2)*b;
        ll res = max((lcm1-1) / r - lcm/r, (lcm2-1)/r - lcm1/r);
        if(res >= k)
            cout << "REBEL" << endl;
        else cout << "OBEY" << endl;
    }
    return 0;
}