#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s, g, ch; cin >> s;
    g = s; ch = "rb";
    int in = 1; 
    map<char, int> mp;
    mp['r'] = 0; mp['b'] = 0;
    for(int i = 0; i < n; i++)
    {
        in ^= 1;
        if(s[i] != ch[in])
            mp[ch[in]]++;
    }
    int ans = max(mp['r'], mp['b']);
    in = 0; s = g;
    mp['r'] = 0; mp['b'] = 0;
    for(int i = 0; i < n; i++)
    {
        in ^= 1;
        if(s[i] != ch[in])
            mp[ch[in]]++;
    }
    ans = min(ans, max(mp['r'], mp['b']));
    cout << ans << endl;
    return 0;
}