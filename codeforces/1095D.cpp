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
    vector<int> adj[n+1];
    for(int i = 1; i <= n; i++)
    {
        int u, v; cin >> u >> v;
        adj[i].push_back(u);
        adj[i].push_back(v);
    }
    if(n == 3) return !(cout << "1 2 3" << endl);
    int cur = 1;
    for(int i = 0; i < n; i++)
    {
        cout << cur << " ";
        int u = adj[cur][0], v = adj[cur][1];
        if(adj[u][0] == v or adj[u][1] == v)
            cur = u;
        else cur = v;
    }
    cout << endl;
    return 0;
}