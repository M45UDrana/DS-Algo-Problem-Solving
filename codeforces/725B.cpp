#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; char c;
    cin >> n >> c;
    string s = " fedabc";
    ll k = 16;
    ll ans;
    for(int i = 1; i < 7; i++)
    {
        if(c == s[i])
        {
            ans = i;
            break;
        }
    }
    if(n%4)
    {
        ans += (ll)(n/4) * k;
        n -= (ll)(n/4) * 4;
    }
    else
    {
        ans += (ll)((n/4)-1) * k;
        n -= (ll) ((n/4)-1) * 4;
    }
    if(!(n%2))
        ans += 7;
    cout << ans << endl;

    return 0;
}