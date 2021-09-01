#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll dif(ll x)
{
    ll res = x;
    while(x)
    {
        res -= x%10;
        x /= 10;
    }
    return res;
}
int main()
{
    ll n, s; cin >> n >> s;
    ll lft = s, rht = n+5;
    while(lft < rht)
    {
        ll mid = lft + (rht-lft)/2;
        if(dif(mid) < s)
            lft = mid+1;
        else rht = mid; 
    }
    cout << max(-1ll, n-lft) + 1 << endl;
    return 0;
}