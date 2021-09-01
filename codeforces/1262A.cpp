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
        int n; cin >> n;
        int a=0, b=1e9+7;
        for(int i = 0; i < n; i++)
        {
            int c, d; cin >> c >> d;
            a = max(a, c);
            b = min(d, b);
        }
        if(a < b)
            cout << 0 << endl;
        else 
            cout << abs(a-b) << endl;
    }
    return 0;
}