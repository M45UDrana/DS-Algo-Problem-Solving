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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    ll p, ans = 0; cin >> p;

    for(ll i = 1, j; i < p; i++)
    {
        ll cur = i;
        for(j = 1; j < p; j++)
        {
            if((cur - 1) % p == 0) break;
            cur = (cur * i) % p;
        } 
        if(j == p-1) ans++;
    }
    cout << ans << endl;
    return 0;
}