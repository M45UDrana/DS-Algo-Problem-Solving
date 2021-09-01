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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    int n, m, d, sub; cin >> n >> m >> d;
    int a[n][m];
    vector<int>v;
    bool flg = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(i == 0 && j == 0)
                sub = a[i][j] % d;
            a[i][j] -= sub;
            if(a[i][j] % d != 0)
                flg = true;
            v.pb(a[i][j]);
        }
    }
    if(flg)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    int mn = m*n;
    int averg = mn / 2;
    ll ans1 = 0, ans2 = 0;
    for(int i = 0; i < mn; i++)
    {
        ans1 += abs(v[averg] - v[i]) / d;
        ans2 += abs(v[averg+1] -v[i]) / d;
    }
    cout << min(ans1, ans2) << endl;
    return 0;
}