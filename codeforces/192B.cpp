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
    vector<pii>v;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i == 0 || i == n-1)
            continue;
        v.pb(mp(a[i], i));
    }
    sort(v.begin(), v.end());
    int sz = v.size(), i = 0;
    for( i = 0; i < sz; i++)
    {
        if(a[v[i].ss+1] && a[v[i].ss-1])
            a[v[i].ss] = 0;
        else
        {
            a[0] = min(a[0], v[i].ff);
            break;
        }
    }
    cout << min(a[0], a[n-1]) << endl;

    return 0;
}