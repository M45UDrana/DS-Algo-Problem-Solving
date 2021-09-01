#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int p, q;
    if(a*d == c*b)
        return !(cout << "0/1" << endl);
    if(a*d < c*b)
    {
        p = a*d;
        q = c*b;
        p = q - p;
    }
    else 
    {
        p = b*c;
        q = d*a;
        p = q - p;
    }
    int gCd = __gcd(p, q);
    p /= gCd;
    q /= gCd;
    cout << p << '/' << q << endl;
    return 0;
}