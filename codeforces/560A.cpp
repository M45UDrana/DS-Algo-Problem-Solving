#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 1)
            ok = false;
    }
    if(ok)
        cout << 1 << endl;
    else cout << -1 << endl;
    return 0;
}