#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[3][10];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n*6; i++)
    {
        int x; cin >> x;
        a[i/6][x] = 1;
    }
    for(int d = 1; d <= 9; d++)
    {
        bool ok = false;
        for(int i = 0; i < n; i++)
            if(a[i][d])
                ok = true;
        if(!ok)
            return !(cout << d-1 << endl);
    }
    for(int d = 1; d <= 9; d++)
    {
        for(int dd = 0; dd <= 9; dd++)
        {
            bool ok = false;
            for(int i = 0; i < n; i++)
            {
                if(a[i][d])
                {
                    for(int j = 0; j < n; j++)
                    {
                        if(i != j and a[j][dd])
                            ok = true;
                    }
                }
            }
            if(!ok)
            {
                int ans = d*10+dd;
                ans--;
                return !(cout << ans << endl);
            }
        }
    }
    return 0;
}