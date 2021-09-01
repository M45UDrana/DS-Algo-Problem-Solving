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
const int oo = 1e9+7;

int main() 
{
    IO;
    int n, m, ans = 0; cin >> n >> m;
    bool cat[n+1];
    for(int i = 1; i <= n; i++)
        cin >> cat[i];
    vector<int> adj[n+1];
    for(int i = 1; i < n; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int scat[n+1] = {0};
    scat[1] = cat[1];
    bool vst[n+1] = {0};
    queue<int>Q;
    Q.push(1);
    vst[1] = 1;
    while(!Q.empty())
    {
        int tmp = Q.front(); Q.pop();
        bool flg = true;
        for(auto x : adj[tmp])
        {
            if(!vst[x])
            {
                flg = false;
                Q.push(x);
                vst[x] = 1;
                if(scat[tmp] > m)
                    scat[x] = scat[tmp];
                else if(cat[x] == 1)
                    scat[x] = scat[tmp]+1;
            }
        }
        if(flg && scat[tmp] <= m)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}