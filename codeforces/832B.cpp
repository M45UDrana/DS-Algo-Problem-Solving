#include <bits/stdc++.h>

using namespace std;

bool gdch[26];

int main()
{
    string gds; cin >> gds;
    for(int i = 0; i < gds.size(); i++)
        gdch[gds[i]-'a'] = 1;
    string s, ls = "", rs = ""; cin >> s;
    bool flg = false;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '*')
        {
            flg = true;
            continue;
        }
        if(flg)
            rs += s[i];
        else ls += s[i];
    }
    int t; cin >> t;
    while(t--)
    {
        string g; cin >> g;
        if((flg and g.size()+1 < s.size()) or (!flg and
                    g.size() != s.size()))
        {
            cout << "NO" << endl;
            continue;
        }          

        bool ok = true;
        for(int i = 0; i < ls.size(); i++)
        {
            if(g[i] == ls[i] or (ls[i] == '?' and 
                        gdch[g[i]-'a']))
                continue;
            ok = false;
            break;
        }

        int i = int(rs.size())-1, j = int(g.size())-1;
        for(; i >= 0; i--, j--)
        {
            if(g[j] == rs[i] or (rs[i] == '?' and
                        gdch[g[j]-'a']))
                continue;
            ok = false;
            break;
        }

        i = ls.size(), j = g.size()-rs.size();
        while(i < j)
        {
            if(gdch[g[i]-'a'])
            {
                ok = false;
                break;
            }
            i++;
        }
        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}