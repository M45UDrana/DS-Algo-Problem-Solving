#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int clr[m+1];
    for(int i = 1; i <= m; i++)
        cin >> clr[i];

    int it_clr[m+1];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            memset(it_clr, 0, sizeof(it_clr));
            for(int l = i; l <= j; l++)
                it_clr[a[l]]++;
            bool ok = true;
            for(int ii = 1; ii <= m; ii++)
                if(it_clr[ii] != clr[ii])
                    ok = false;
            if(ok)
                return !(cout << "YES" << endl);
        }
    }
    cout << "NO" << endl;
    return 0;
}