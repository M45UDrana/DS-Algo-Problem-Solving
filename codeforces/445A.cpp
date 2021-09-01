#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int m, n;
    cin >> n >> m;
    char a[n+1][m+1];
    char con[3] = "BW";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '.')
            {
                flag = (i+j) % 2;
                a[i][j] = con[flag];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}