#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, t1, t2, x, flg = 0;
    int m, s;
    cin >> h >> m >> s >> t1 >> t2;
    map<double, int> mp;
    if(s)
    {
        if(s%5 == 0)
            x = s / 5;
        else x = s/5 + 0.5;
        flg = .5;
    }
    else
        x = 12;
    mp[x] = 1;

    if(m%5 == 0)
        x = (m / 5) + flg;
    else x = m/5 + 0.5;
    if(x == 0)
        x = 12;
    mp[x] = 1;

    h += flg;
    if(h > 12)
        h -= 12;
    mp[h] = 1;
    x = t1;
    while(1)
    {
        x += .5;
        if(x == 12.5)
            x = .5;
        if(x == t2)
            return !(cout << "YES" << endl);
        if(mp[x])
            break;
    }
    x = t1;
    while(1)
    {
        x -= .5;
        if(x == 0)
            x = 12;
        if(x == t2)
            return !(cout << "YES" << endl);
        if(mp[x])
            break;
    }
    cout << "NO" << endl;
    return 0;
}