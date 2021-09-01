#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, g; cin >> s;
    int n; cin >> n;
    bool a = false, b = false;
    for(int i = 0; i < n; i++)
    {
        cin >> g;
        if(g[0] == s[1])
            a = true;
        if(g[1] == s[0])
            b = true;
        if(g[0] == s[0] and g[1] == s[1])
        {
            a = true;
            b = true;
        }
    }
    if(a and b)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}