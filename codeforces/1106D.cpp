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
#define N 100010

vector<int> v[N];
bool sn[N];

int main()
{
    IO
    int n, m; cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>>q;

    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        v[x].pb(y); v[y].pb(x);
    }

    q.push(1);
    sn[1] = true;
    while(!q.empty())
    {
        int now = q.top();
        q.pop();
        cout << now << " ";
        int sz = v[now].size();
        for(int i = 0; i < sz; i++)
        {
            if(!sn[v[now][i]])
            {
                q.push(v[now][i]);
                sn[v[now][i]] = true;
            }
        }
    }
    cout << endl;
    
    return 0;
}