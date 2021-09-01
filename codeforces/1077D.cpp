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
#define N 200010
 
vector<pii> v(N);
int main()
{
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        v[tmp].ss = tmp; v[tmp].ff++;
    }
    
    int l = 1, r = n;
    ll sum = 0;
    while(l < r)
    {
        sum = 0;
        int m = (r+l+1) / 2;
        for(int i = 0; i < N; i++)
            sum += v[i].ff / m;
        if(sum < k)
            r = m-1;
        else l = m;
    }
    vector<int> ans;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < v[i].ff/r; j++)
        {
            ans.pb(v[i].ss);
        }
    }
    for(int i = 0; i < k; i++)
        cout << ans[i] << " ";
    puts("");
    return 0;
}