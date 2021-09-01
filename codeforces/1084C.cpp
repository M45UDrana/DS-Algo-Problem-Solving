#include <bits/stdc++.h>

using namespace std;

const int md = 1e9+7;

int main()
{
    string s; cin >> s;
    int cnta = 0, ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a')
            (ans += cnta+1) %= md;
        if(s[i] == 'b')
            cnta = ans;
    }
    cout << ans << endl;
    return 0;
}