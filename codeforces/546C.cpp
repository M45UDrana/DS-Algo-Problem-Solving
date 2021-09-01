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
    int z; cin >> z;
    queue<int>q1, q2;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        q1.push(a);
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++)
    {
        int a; cin >> a;
        q2.push(a);
    }
    int ans = 0;
    while(!q1.empty() && !q2.empty())
    {
        ans++;
        int a, b;
        a = q1.front(); q1.pop();
        b = q2.front(); q2.pop();
        if(a > b)
        {
            q1.push(b);
            q1.push(a);
        }
        else
        {
            q2.push(a);
            q2.push(b);
        }
        if(ans > 1000)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    if(q1.size() == 0)
        d(ans, 2, "");
    else d(ans, 1, "");
    return 0;
}