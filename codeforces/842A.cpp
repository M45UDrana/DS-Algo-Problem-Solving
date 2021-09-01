#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;
    while(x <= y)
    {
        if(l <= (x*k) and (x*k) <= r)
        {
            cout << "YES" << endl;
            return 0;
        }
        x++;
    }
    cout << "NO" << endl;
    return 0;
}