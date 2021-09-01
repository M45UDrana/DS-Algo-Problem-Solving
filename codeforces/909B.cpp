#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 1; cin >> n;
    int a[n+1];
    memset(a, 0, sizeof(a));
    for(int i = 1; i < n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            for(int l = i; l <= j; l++)
            {
                a[l]++;
                ans = max(a[l], ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}