#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[105][105];

bool mirror(int i, int j)
{
    while(i<j)
    {
        for(int l = 1; l <= m; l++)
        {
            if(a[i][l] != a[j][l])
                return false;
        }
        i++;j--;
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    while(n%2 == 0)
    {
        bool ok = true;
        if(!mirror(1, n))
                ok = false;
        if(ok)
            n /= 2;
        else break;
    }
    cout << n << endl;
    return 0;
}