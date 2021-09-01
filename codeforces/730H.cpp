#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string s[n], ans;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int idx[n];
    memset(idx, 0, sizeof(idx));
    for(int i = 0, x; i < m; i++)
    {
        cin >> x;
        x--;
        idx[x] = 1;
        if(!i)
            ans = s[x];
    }
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        if(idx[i])
        {
            if(s[i].size() != ans.size())
                ok = false;
            for(int j = 0; j < ans.size(); j++)
                if(ans[j] != s[i][j])
                    ans[j] = '?';
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(!idx[i])
        {
            if(s[i].size() != ans.size())
                continue;
            bool flg = true;
            for(int j = 0; j < ans.size(); j++)
            {
                if(s[i][j] == ans[j] or ans[j] == '?')
                    continue;
                flg = false;
            }
            if(flg)
                ok = false;
        }
    }
    if(ok)
        cout << "Yes" << endl << ans << endl;
    else cout << "No" << endl;
    return 0;
}