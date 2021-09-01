#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, g; cin >> s >> g;
    int sa[26], ga[26];
    memset(sa, 0, sizeof(sa));
    memset(ga, 0, sizeof(ga));
    for(int i = 0; i < s.size(); i++)
        sa[(int)s[i]-'a']++;
    for(int i = 0; i < g.size(); i++)
        ga[(int)g[i]-'a']++;
    bool ok = true;
    for(int i = 0; i < 26; i++)
    {
        if(ga[i] > sa[i])
            ok = false;
    }
    if(!ok)
        return !(cout << "need tree" << endl);
    for(int i = 0, j = 0; i < g.size(); i++)
    {
        while(g[i] != s[j] and j < s.size())
            j++;
        if(j == s.size())
            ok = false;
        if(g[i] == s[j])
            j++;
    }
    if(!ok and g.size() < s.size())
        cout << "both" << endl;
    else if(!ok)
        cout << "array" << endl;
    else cout << "automaton" << endl;
    return 0;
}