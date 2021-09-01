#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[101];
    memset(a, 0, sizeof(a));
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    int x = -1, y = -1, x1, y1;
    for(int i = 0; i < 101; i++)
    {
        if(a[i] != 0)
        {
            if(x == -1)
            {
                x = a[i];
                x1 = i;
            }
            else if(y == -1)
            {
                y = a[i];
                y1 = i;
            }
            else 
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if(x == y)
    {
        cout << "YES" << endl;
        cout << x1 << " " << y1 << endl;
    }
    else cout << "NO" << endl;
    return 0;
}