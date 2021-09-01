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
    int n, a, b, k, ans = 0; cin >> n >> a >> b >> k;
    vector<int>v;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x;
        y = x % (a+b);
        if(y <= a and y > 0)
            ans++;
        else if(y == 0)
            v.pb((b+a-1)/a);
        else v.pb((y-1)/a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() and k ; i++)
    {
        if(v[i] <= k)
        {
            ans++;
            k -= v[i];
        }
    }
    cout << ans << endl;

    return 0;
}