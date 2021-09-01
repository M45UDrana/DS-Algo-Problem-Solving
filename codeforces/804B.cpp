#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll md = 1e9+7;

int main()
{
    string s; cin >> s;
    ll ans = 0, cntb = 0;
    for(int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == 'a')
        {
            ans = (ans + cntb) % md;
            cntb = (cntb + cntb) % md;
        }
        else cntb = (cntb + 1) % md;
    }
    cout << ans << endl;
    return 0;
}