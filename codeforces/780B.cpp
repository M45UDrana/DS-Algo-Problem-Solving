#include <bits/stdc++.h>

using namespace std;

typedef long double ld;

int main()
{
    int n; cin >> n;
    ld a[n], b[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    ld lft = 0, rht = 1e10;
    for(int j = 0; j < 500; j++)
    {
        ld mid = (lft+rht)/2;
        ld mx_l = -1e10;
        ld mn_r = 1e10;
        for(int i = 0; i < n; i++)
        {
            mx_l = max(mx_l, a[i]-b[i]*mid);
            mn_r = min(mn_r, a[i]+b[i]*mid);
        }
        if(mx_l > mn_r)
            lft = mid;
        else
            rht = mid;
    }
    cout << setprecision(20) << rht << endl;
    return 0;
}