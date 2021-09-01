#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll md = 998244353;

int main()
{
    ll n; cin >> n;
    ll sum = n, mlt = 1, i = 2;
    while(n)
    {
        ll m = n-2;
        if(m < 1)
            break;
        (mlt *= n)%=md;
        m = ((mlt*m)%md*i)%md;
        (sum += m) %= md;
        n--; i++;
    }
    cout << sum << endl;
    return 0;
}