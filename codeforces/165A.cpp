#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n, lt = 0, rt = 0, up = 0, lw = 0, ans = 0;
    cin >> n ;
    int x[n], y[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < n; i++)
    {
        lt = 0, rt = 0, up = 0, lw = 0;
        for(int j = 0; j < n; j++)
        {
            if(x[j] > x[i] && y[j] == y[i])
                rt = 1;
            else if(x[j] < x[i] && y[j] == y[i])
                lt = 1;
            else if(x[j] == x[i] && y[j] > y[i])
                up = 1;
            else if(x[j] == x[i] && y[j] < y[i])
                lw = 1;
        }
        if((rt + lt + up + lw) == 4)
            ans++;
    }

    cout << ans << endl;
    return 0;
}