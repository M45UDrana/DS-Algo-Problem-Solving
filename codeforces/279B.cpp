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
    int n, t; cin >> n >> t;
    int a[n]; ll b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    partial_sum(a, a+n, b);
    int ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(b[i] <= t)
        {
            ans = i+1;
            break;
        }
    }
    
    for(int l = 0, r = 1; r < n; r++)
    {
        if((b[r] - b[l]) <= t)
        {
            ans = max(ans, r-l); //d(ans, r-l, r)
        }
        else
        {
            l++; r--;
        }
    }
    cout << ans << endl;

    return 0;
}