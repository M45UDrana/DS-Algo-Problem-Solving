#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    ll n, k, a, b; 
    cin >> n >> k >> a >> b;
    ll x = n, ans = (n-1)*a, sum = 0;
    while(x >= k and k != 1)
    {
        sum += ll(x%k)*a + b;
        x /= k;
        ans = min(ans, sum + (x-1)*a);
    }
    ans = min(ans, sum + (x-1)*a); 
    cout << ans << endl;
    return 0;
}