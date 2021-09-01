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
    int n, ans = 1; cin >> n;
    int a[n], l[n], r[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        l[i] = r[i] = 1;
    }
    for(int i = 1; i < n; i++)
        if(a[i] > a[i-1])
        {
            l[i] = l[i-1]+1;
            ans = max(ans, l[i]);
        }
    for(int i = n-2; i >= 0; i--)
        if(a[i] < a[i+1])
            r[i] = r[i+1]+1;

    for(int i = 1; i < n-1; i++)
    {
        if(a[i-1] < a[i+1])
            ans = max(ans, l[i-1]+r[i+1]);
    }
    cout << ans << endl;
    return 0;
}