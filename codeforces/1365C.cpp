#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define PI 3.14159265
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
    int a[n+1], b[n+1], cnt[n+1];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        a[x] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        b[x] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] > b[i])
            b[i] += n;
        cnt[b[i]-a[i]]++;
    }
    int ans = 0;
    for(int i = 0; i <= n; i++)
        ans = max(cnt[i], ans);
    cout << ans << endl;
    return 0;
}