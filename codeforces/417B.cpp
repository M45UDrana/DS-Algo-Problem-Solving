#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+1;

int main()
{
    int n; cin >> n;
    int a[N];
    memset(a, -1, sizeof(a));
    bool ok = true;
    for(int i = 0, x, k; i < n; i++)
    {
        cin >> x >> k;
        if(a[k] < x-1)
            ok = false;
        a[k] = max(a[k], x);
    }
    if(ok)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}