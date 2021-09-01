#include <bits/stdc++.h>

using namespace std;

string fs = " [{(<", se = " ]})>";

int fsb(char b)
{
    for(int i = 0; i < fs.size(); i++)
        if(fs[i] == b)
            return i;
    return 0;
}

int seb(char b)
{
    for(int i = 0; i < se.size(); i++)
        if(se[i] == b)
            return i;
    return 0;
}
int main()
{
    string s; cin >> s;
    stack<char> S;
    int ans = 0;
    bool ok = true;
    for(int i = 0; i < s.size(); i++)
    {
        if(fsb(s[i]))
        {
            S.push(s[i]);
            continue;
        }
        if(S.empty())
        {
            ok = false;
            break;
        }
        char b = S.top();
        S.pop();
        if(fsb(b) != seb(s[i]))
            ans++;
    }
    if(!S.empty())
        ok = false;
    if(ok)
        cout << ans << endl;
    else cout << "Impossible" << endl;
    return 0;
}