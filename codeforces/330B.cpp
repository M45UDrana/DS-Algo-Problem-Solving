#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    bool used[n+1];
    memset(used, 0, sizeof(used));
    int x, y;
    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        used[x] = 1;
        used[y] = 1;
    }
    for(int i = 1; i < n+1; i++)
    {
        if(!used[i])
        {
            cout << n-1 << endl;
            for(int j = 1; j <= n; j++)
            {
                if(i != j)
                    cout << i << " " << j << endl;
            }
            return 0;
        }
    }
    cout << (n-2) * 2 << endl;
    for(int i = 1; i <= n; i++)
    {
        if(x != i and y != i)
            cout << x << " " << i << endl
                << y << " " << i << endl;
    }
    return 0;
}