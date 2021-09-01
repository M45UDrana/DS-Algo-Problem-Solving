#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ll;

int main()
{
    ll n, k, ans = 1, i = 1; cin >> n >> k;
    while(i <= n)
    {
        ans |= i;
        i <<= 1;
    }
    if(k > 1)
        cout << ans << endl;
    else cout << n << endl;
    return 0;
}