#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<int> used(26, 0);
    for(int i = 0; i < n; i++)
        if(s[i] != '*')
            used[s[i]-'a'] = 1;

    int m; cin >> m;
    string g[m];
    for(int i = 0; i < m; i++)
        cin >> g[i];

    int ans = 0;
    for(char c = 'a'; c <= 'z'; c++)
    {
        if(used[c-'a']) continue;
        bool ok = true;
        for(int i = 0; i < m; i++)
        {
            bool flg = true;
            for(int j = 0; j < n; j++)
            {
                if(s[j] == '*' and g[i][j] == c)
                    flg = false;
                if(s[j] == '*' and used[g[i][j] - 'a'])
                    flg = false;
                if(s[j] != '*' and g[i][j] != s[j])
                    flg = false;
            }
            if(flg)
            {
                ok = false;
                break;
            }
        }
        if(ok)
            ans++;
    }
    cout << ans << endl;
    return 0;
}