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
    int q; cin >> q;
    while(q--)
    {
        int a, b, n, s; cin >> a >> b >> n >> s;
        int c = min(a, s/n);
        int d = s - (n * c);
        if(d <= b )
            cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }
 
    return 0;
}