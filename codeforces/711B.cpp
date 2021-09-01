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
    int n;
    ll dgn = 0, dgn1 = 0, sum, ans; 
    cin >> n;
    ll a[n][n];
    vector <ll> v(n, 0);
    pair<int, int>p;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 0)
            {
                p.first = i; p.second = j;
            }
        }

    sum = max(accumulate(a[0], a[0]+n, 0LL), accumulate(a[1], a[1]+n, 0LL));
    ans = sum - accumulate(a[p.first], a[p.first]+n, 0LL);
    a[p.first][p.second] = ans;

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if(ans <= 0)
    {
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            v[j] += a[i][j];
            if(i == j)
                dgn += a[i][j];
            if(j+1 == n-i)
                dgn1 += a[i][j];
        }
    v.pb(dgn); v.pb(dgn1);

    for(int i = 0; i < n; i++)
       v.pb(accumulate(a[i], a[i]+n, 0LL));

    sort(v.begin(), v.end());

    if(v[v.size()-1] == v[0])
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}