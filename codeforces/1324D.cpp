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
    int a[n];
    for(int i = 0;i < n; i++)
        cin >> a[i];
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        a[i] -= x;
    }
    sort(a, a+n);
    int i = 0;
    while( i < n and a[i] < 0)
        i++;
    int l = i-1;
    ll ans = 0;
    for(; i < n; i++)
    {
        while(l >= 0 and a[i]+a[l] > 0)
            l--;
        l = max(l, 0);
        while(l < i and a[i]+a[l] <= 0)
            l++;
        ans += i-l;
    }
    cout << ans << endl;
    return 0;
}