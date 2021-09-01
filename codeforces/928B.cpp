#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int res[n+1];
    for(int i = 1; i <= n; i++)
    {
        if(a[i])
        {
            res[i] = res[a[i]];
            int l = max(a[i]+k+1, i-k);
            int r = min(i+k, n);
            if(r >= l)
                res[i] += r+1-l;
        }
        else res[i] = min(i-1,k)+min(n-i, k)+1;
    }
    for(int i = 1; i <= n; i++)
        cout << res[i] << " \n"[i==n];
    return 0;
}