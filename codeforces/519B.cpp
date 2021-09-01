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
    int n; cin >> n;
    int a[n], b[n-1], c[n-2];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n-1; i++)
        cin >> b[i];
    for(int i = 0; i < n-2; i++)
        cin >> c[i];
    sort(a, a+n);
    sort(b, b+n-1);
    sort(c, c+n-2);
    int ans[2] = {-1, -1};
    for(int i = 0; i <n-1; i++)
        if(a[i] != b[i])
        {
            ans[0] = a[i];
            break;
        }
    for(int i = 0; i < n-2; i++)
        if(b[i] != c[i])
        {
            ans[1] = b[i];
            break;
        }
    if(ans[0] == -1)
        ans[0] = a[n-1];
    if(ans[1] == -1)
        ans[1] = b[n-2];
    cout << ans[0] << endl;
    cout << ans[1] << endl;
    return 0;
}