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
    IO;
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n+1];
        memset(a, 0, sizeof(a));
        for(int i = 0, x; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        int ans = 0;
        for(int i = 1, x = 0; i <= n; i++)
        {
            a[i] += x;
            ans += a[i]/i;
            x = a[i] - ((int)(a[i]/i)*i);
        }
        cout << ans << endl;
    }
    return 0;
}