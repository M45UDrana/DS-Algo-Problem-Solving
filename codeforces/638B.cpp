#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int used[27], prv[27], adj[27];
    memset(used, 1, sizeof(used));
    memset(prv, 0, sizeof(prv));
    memset(adj, 0, sizeof(adj));
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < s.size(); j++)
        {
            int x = s[j]-'a'+1;
            used[x] = false;
            if(j)
            {
                adj[s[j-1]-'a'+1] = x;
                prv[x] = s[j-1]-'a'+1;
            }
        }
    }
    s = "";
    for(int i = 1; i <= 26; i++)
    {
        if(!prv[i] and !used[i])
        {
            int st = i;
            used[i] = true;
            s += st+'a'-1;
            while(adj[st])
            {
                st = adj[st];
                used[st] = true;
                s += st+'a'-1;
            }
        }
    }
    cout << s << endl;
    return 0;
}