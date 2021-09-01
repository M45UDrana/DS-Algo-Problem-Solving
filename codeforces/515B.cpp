#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int gc = __gcd(n, m);
    bool used[gc];
    memset(used, 0, sizeof(used));
    int b; cin >> b;
    for(int i = 0,x; i < b; i++)
    {
        cin >> x;
        used[x%gc] = true;
    }
    int g; cin >> g;
    for(int i = 0, x; i < g; i++)
    {
        cin >> x;
        used[x%gc] = true;
    }
    for(int i = 0; i < gc; i++)
    {
        if(!used[i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}