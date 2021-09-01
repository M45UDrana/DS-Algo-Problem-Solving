#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ab[2], cd[2];

int main()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;  
    ll A = a*b, C = c*d;  
    ll ans = 0;
    while(A%3 == 0)
    {
        A /= 3;
        A *= 2;
        ab[1]++;
    }
    while(A%2 == 0)
    {
        A /= 2;
        ab[0]++;
    } 
    while(C%3 == 0)
    {
        C /= 3;
        C *= 2;
        cd[1]++;
    }
    while(C%2 == 0)
    {
        C /= 2;
        cd[0]++;
    }
    if(A != C)
        return !(cout << -1 << endl);
    if(ab[1] > cd[1])
    {
        while(ab[1] > cd[1] and a%3 == 0)
        {
            ab[1]--;
            ans++;
            a /= 3;
            a *= 2;
        }
        while(ab[1] > cd[1] and b%3 == 0)
        {
            ab[1]--;
            ans++;
            b /= 3;
            b *= 2;
        }
    }
    else if(ab[1] < cd[1])
    {
        while(ab[1] < cd[1] and c%3 == 0)
        {
            cd[1]--;
            ans++;
            c /= 3;
            c *= 2;
        }
        while(ab[1] < cd[1] and d%3 == 0)
        {
            cd[1]--;
            ans++;
            d /= 3;
            d *= 2;
        }
    }
    if(ab[0] > cd[0])
    {
        while(ab[0] > cd[0] and a%2 == 0)
        {
            ab[0]--;
            ans++;
            a /= 2;
        }
        while(ab[0] > cd[0] and b%2 == 0)
        {
            ab[0]--;
            ans++;
            b /= 2;
        }
    }
    else if(ab[0] < cd[0])
    {
        while(ab[0] < cd[0] and c%2 == 0)
        {
            cd[0]--;
            ans++;
            c /= 2;
        }
        while(ab[0] < cd[0] and d%2 == 0)
        {
            cd[0]--;
            ans++;
            d /= 2;
        }
    }
    cout << ans << endl;
    cout << a << " " << b << endl
        << c << " " << d << endl;
    return 0;
}