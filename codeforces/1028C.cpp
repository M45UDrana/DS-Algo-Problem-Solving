#include <bits/stdc++.h>

using namespace std;
const int inf = 1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int a[n][4], pre[n][4], suf[n][4];
    for(int i = 0; i < n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    pre[0][0] = a[0][0]; pre[0][1] = a[0][1];
    pre[0][2] = a[0][2]; pre[0][3] = a[0][3];
    for(int i = 1; i < n; i++)
    {
        pre[i][0] = max(pre[i-1][0], a[i][0]);
        pre[i][1] = max(pre[i-1][1], a[i][1]);
        pre[i][2] = min(pre[i-1][2], a[i][2]);
        pre[i][3] = min(pre[i-1][3], a[i][3]);
    }
    suf[n-1][0] = a[n-1][0]; suf[n-1][1] = a[n-1][1];
    suf[n-1][2] = a[n-1][2]; suf[n-1][3] = a[n-1][3];
    for(int i = n-2; i >= 0; i--)
    {
        suf[i][0] = max(suf[i+1][0], a[i][0]);
        suf[i][1] = max(suf[i+1][1], a[i][1]);
        suf[i][2] = min(suf[i+1][2], a[i][2]);
        suf[i][3] = min(suf[i+1][3], a[i][3]);
    }

    for(int i = 0; i < n; i++)
    {
        if(!i and suf[i+1][0] <= suf[i+1][2] and
                suf[i+1][1] <= suf[i+1][3])
        {
            cout << suf[i+1][0] <<" "<< suf[i+1][1] << endl;
            return 0;
        }
        else if(i+1 == n and pre[i-1][0] <= pre[i-1][2] and
                pre[i-1][1] <= pre[i-1][3])
        {
            cout << pre[i-1][0] <<" "<< pre[i-1][1] << endl;
            return 0;
        }
        else
        {
            int x1 = max(pre[i-1][0], suf[i+1][0]);
            int y1 = max(pre[i-1][1], suf[i+1][1]);
            int x2 = min(pre[i-1][2], suf[i+1][2]);
            int y2 = min(pre[i-1][3], suf[i+1][3]);
            if(x1 <= x2 and y1 <= y2)
                return !(cout << x1 << " " << y1 << endl);
        }
    }
    return 0;
}