#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int q; cin >> q;
    while(q--)
    {
        ll x, y, k; cin >> x >> y >> k;
        if(max(x,y) > k)
        {
            cout << -1 << endl;
            continue;
        }
        if(x>y) swap(x,y);
        int d = (y-x)%2;
        if(d)
        {
            cout << k-1 << endl;
        }
        else if(y%2 == k%2)
            cout << k << endl;
        else cout << k-2 << endl;
    }
    return 0;
}