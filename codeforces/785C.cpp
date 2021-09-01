#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    if(n <= m)
        return !(cout << n << endl);
    ll l = 1, r = 1e10;
    while(l < r)
    {
        ll mid = (l+r)/2;
        ll grn = (mid*mid+mid)/2;
        if(n-grn <= m)
            r = mid;
        else l = mid+1;
    }
    cout << l + m << endl;
    return 0;
}