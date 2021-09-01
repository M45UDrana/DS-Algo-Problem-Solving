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
    int n, d; cin >> n >> d;
    int a, b; cin >> a >> b;
    vector<pii>v(n);
    for(int i = 0; i < n; i++)
    {
        int e, f; cin >> e >> f;
        v[i].ff = e*a + f*b;
        v[i].ss = i+1;
    }
    sort(v.begin(), v.end());
    vector<int>ans;
    for(int i = 0; i < n; i++)
    {
        if(d - v[i].ff >= 0)
        {
            ans.pb(v[i].ss);
            d -= v[i].ff;
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}