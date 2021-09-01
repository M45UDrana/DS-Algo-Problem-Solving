#include <bits/stdc++.h>

using namespace std;
const int inf = 1e9+7;

int main() 
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> frm(m), to(m), cst(m), str(n+1, 0);
    for(int i = 0; i < m; i++)
    {
        cin >> frm[i] >> to[i] >> cst[i];
    }
    for(int i = 0; i < k; i++)
    {
        int x; cin >> x;
        str[x] = 1;
    }
    int ans = inf;
    for(int i = 0; i < m; i++)
    {
        if((str[frm[i]] and !str[to[i]]) or (str[to[i]] and
                !str[frm[i]]))
            ans = min(ans, cst[i]);
    }
    if(ans == inf)
        ans = -1;
    cout << ans << endl;
    return 0;
}