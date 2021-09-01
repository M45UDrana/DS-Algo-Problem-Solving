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
    int n, k; cin >> n >> k;
    bool ok = false;
    vector<int> v[5001];
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        v[x].pb(i);
        if(v[x].size() > k)
            ok = true;
    }
    if(ok)
    {
        cout << "NO" << endl;
        return 0;
    }
    int ans[n];
    for(int i = 0, c = 0; i <= 5000; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            ans[v[i][j]] = (c%k)+1;
            c++;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}