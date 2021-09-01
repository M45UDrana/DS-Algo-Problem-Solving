#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n], disa[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n-1; i++)
        disa[i] = a[i+1] - a[i];
    disa[n-1] = (a[0]+m) - a[n-1];

    int b[n], disb[n];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n-1; i++)
        disb[i] = b[i+1] - b[i];
    disb[n-1] = (b[0] + m) - b[n-1];

    for(int i = 0; i < n; i++)
    {
        bool ok = true;
        for(int j = 0; j < n; j++)
        {
            if(disa[j] != disb[(j+i)%n])
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}