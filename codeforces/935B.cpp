#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    bool up = false, dwn = false;
    if(s[0] == 'U')
        up = true;
    else dwn = true;
    int u = 0, r = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
            u++;
        else r++;
        if(!up and u > r)
        {
            up = true;
            dwn = false;
            ans++;
        }
        else if(!dwn and r > u)
        {
            dwn = true;
            up = false;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}