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
    int a, b, c; cin >> a >> b >> c;
    ll ans = 0;
    int n = b+c;
    for(int i = 1; i < n; i++)
    {
        ans += a;
        b--; c--;
        if(b > 0 && c > 0)
            a++;
        else if(b > 0 || c > 0);
        else
            a--;
    }
    cout << ans << endl;
    return 0;
}