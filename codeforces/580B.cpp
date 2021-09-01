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
    int n, d; cin >> n >> d;
    vector<pii>v;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        v.pb(mp(a, b));
    }
    sort(v.begin(), v.end());
    ll psum[n];
    psum[0] = v[0].ss;
    for(int i = 1; i < n; i++)
        psum[i] = v[i].ss + psum[i-1];

    int i = 0, j = 0;
    ll  ans = 0;
    while(i != n)
    {
        if(abs(v[i].ff - v[j].ff) < d)
        {
            if(i == 0)
                ans = max(ans, psum[j]);
            else ans = max(ans, psum[j] - psum[i-1]);
        }
        if(j == n-1)
            i++;
        else if(abs(v[i].ff-v[j].ff) >= d)
            i++;
        else j++;
    }
    cout << ans << endl;
    return 0;
}