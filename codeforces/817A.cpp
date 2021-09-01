#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int d1 = abs(x1-x2), d2 = abs(y1-y2);
    int x, y; cin >> x >> y;
    if(d1%x != 0 or d2%y != 0)
        return !(cout << "NO" << endl);
    int c = min(d1/x, d2/y);
    d1 -= c*x;
    d2 -= c*y;
    if(d1 == 0 and (d2/y)%2 == 0)
        return !(cout << "YES" << endl);
    if((d1/x)%2 == 0 and d2 == 0)
        return !(cout << "YES" << endl);
    cout << "NO" << endl;
    return 0;
}