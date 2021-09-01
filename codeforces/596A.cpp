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
    vector<pii>v;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        v.pb(mp(a,b));
    }
    vector<int>ans;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(v[i].ff != v[j].ff && v[i].ss != v[j].ss)
            {
                int a, b;
                a = abs(v[i].ff - v[j].ff);
                b = abs(v[i].ss - v[j].ss);
                ans.pb(a*b);
            }
        }
    }
    if(ans.size() == 1)
        cout << ans[0] << endl;
    else if(ans.size() == 2 && ans[0] == ans[1])
        cout << ans[0] << endl;
    else cout << -1 << endl;
    return 0;
}