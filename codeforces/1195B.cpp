#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, k;

ll cal(ll m)
{
    return ((((m*m) + m)/2) - (n-m));
}
int main()
{
    cin >> n >> k;
    ll l = 1, r = n, mid;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(cal(mid) > k)
            r = mid-1;
        else if(cal(mid) < k)
            l = mid+1;
        else break;
    }
    cout << ((mid*mid)+mid)/2 - k << endl;
    return 0;
}