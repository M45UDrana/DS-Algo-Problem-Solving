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
    int n, h, l, r;
    cin >> n >> h >> l >> r;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int,int> > v[n];
    v[0].pb(mp(a[0]%h, 0));
    v[0].pb(mp((a[0]-1)%h, 0));
    for(int i = 0; i < n-1; i++)
    {
       for(int j = 0; j < v[i].size(); j++)
       {
           if(v[i][j].first >= l and v[i][j].first <= r)
               v[i][j].second = v[i][j].second + 1;
           v[i+1].pb(mp((v[i][j].first+a[i+1])%h, v[i][j].second));
           v[i+1].pb(mp((v[i][j].first+a[i+1]-1)%h, v[i][j].second));
       }
    }
    int ans = 0;
    for(int i = 0; i < v[n-1].size(); i++)
    {
        if(v[n-1][i].first >= l and v[n-1][i].first <= r)
            v[n-1][i].second = v[n-1][i].second + 1;
        ans = max(ans, v[n-1][i].second);
    }
    cout << ans << endl;
    return 0;
}