#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int m = s[0].size();
    bool ok = true;
    int ans = 1e9+7;
    for(int u = 0; u < n; u++)
    {
        int cnt = 0;
        for(int v = 0; v < n; v++)
        {
            if(u != v)
            {
                int pos = (s[v]+s[v]).find(s[u]);
                if(pos == string::npos)
                    ok = false;
                else cnt += pos;
            }
        }
        ans = min(ans, cnt);
    }
    if(ok)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}