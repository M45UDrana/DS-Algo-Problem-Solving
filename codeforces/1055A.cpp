#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s; cin >> n >> s;
    int a[n+1], b[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cin >> b[i];
    bool ok = a[1];
    int flg = 0;
    for(int i = s; i <= n; i++)
        flg |= (a[i] and b[i]);
    if((!flg or !b[s]) and !a[s])
        ok = false;
    if(ok)
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}