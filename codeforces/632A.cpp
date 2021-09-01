#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
int main()
{
    ll n, p; cin >> n >> p;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        v[i] = s;
    }
    reverse(v.begin(),v.end());
    ll ans = p/2, cur = 1;
    for(int i = 1; i < n; i++)
    {
        ans += (cur*p);
        cur *= 2;
        if(v[i] == "halfplus")
        {
            ans += p/2;
            cur++;
        }
    }
    cout << ans << endl;
    return 0;
}