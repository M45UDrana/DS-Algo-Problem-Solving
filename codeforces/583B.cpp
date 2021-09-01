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
const int oo = 1e9+7;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = 0, ans = -1,infm = 0;
    while(m != n)
    {
        int l = 0, r = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= infm)
            {
                infm++; m++;
                a[i] = oo;
                l = 1;
            }
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(a[i] <= infm)
            {
                infm++; m++;
                a[i] = oo;
                r = 1;
            }
        }
        ans += l+r;
    }
    cout << ans << endl;
    return 0;
}