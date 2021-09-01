#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        vector<int> lst[26];
        for(int i = 0; i < s.size()-1; i++)
        {
            int u = (int)s[i]-'a', v = (int)s[i+1]-'a';
            lst[u].push_back(v);
            lst[v].push_back(u);
        }
        for(int i = 0; i < 26; i++)
        {
            sort(lst[i].begin(), lst[i].end());
            lst[i].erase(unique(lst[i].begin(), lst[i].end()), lst[i].end());
        }
        int st = -1;
        bool flg = true;
        for(int i = 0; i < 26; i++)
        {
            if((int)lst[i].size() == 1)
                st = i;
            else if((int)lst[i].size() > 2)
            {
                flg = false;
                break;
            }
        }
        if(s.size() == 1)
        {
            cout << "YES" << endl;
            for(char i = 'a'; i <= 'z'; i++)
                cout << i;
            cout << endl;
            continue;
        }
        if((!flg) or st == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        string ans = "";
        bool visit[26];
        memset(visit, 0, sizeof(visit));
        stack<int> chr;
        chr.push(st);
        visit[st] = true;
        while(!chr.empty())
        {
            int u = chr.top();
            chr.pop();
            ans += (char)u+'a';
            for(int i = 0; i < lst[u].size(); i++)
            {
                int v = lst[u][i];
                if(!visit[v])
                {
                    visit[v] = true;
                    chr.push(v);
                }
            }
        }
        for(int i = 0; i < 26; i++)
        {
            if(!visit[i])
                ans += (char)i+'a';
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    return 0;
}