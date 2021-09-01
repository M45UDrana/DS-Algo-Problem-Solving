#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = n/a, y = n/b, z = n/((a*b) / __gcd(a,b));
    x -= z; y -= z;
    x *= p; y *= q;
    z *= max(p,q);
    cout << x+y+z << endl;
    return 0;
}