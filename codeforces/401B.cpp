#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < k; i++)
    {
        int t, x, y; cin >> t;
        if(t == 1)
        {
           cin >> x >> y;
          a[x] = 2; a[y] = y;
        }
        else 
        {
           cin >> x;
          a[x] = 2;
        } 
    }
    int ans_mx = 0, ans_mn = 0;
    for(int i = 1, cnt = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            cnt++;
            ans_mx++;
        }
        if(a[i] != 0 or i == n-1)
        {
            ans_mn += cnt/2;
            cnt = 0;
        }
    }
    cout << ans_mx - ans_mn << " " << ans_mx << endl;
    return 0;
}