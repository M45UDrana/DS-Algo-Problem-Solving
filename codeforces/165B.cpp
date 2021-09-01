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
    int n, k; cin >> n >> k;
    int ans = n;
    vector<int>a;
    for(int i = 0; pow(k, i) <= n; i++)
    {
        a.pb(pow(k, i));
    }
    ll sum = 0;
    int l = 1, r = n;
    int v = (r+l)/2;
    while(r >= l)
    {
        sum = 0;
        for(int j = 0; j < a.size(); j++)
            sum += v / a[j];

        if(sum >= n)
            ans = min(ans, v);
        if(sum < n)
            l = v+1;
        else if(sum >= n)
            r = v-1;
        v = (r+l)/2;
    }
    cout << ans << endl;
    return 0;
}