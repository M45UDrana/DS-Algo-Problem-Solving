#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    int mn, mx;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i)
        {
            mn = min(a[i], mn);
            mx = max(a[i], mx);
        }
        else 
        {
            mn = a[i];
            mx = a[i];
        }
    }
    if(mx-mn > k)
        return !(cout << "NO" << endl);
    cout << "YES" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= a[i]; j++)
            cout << max(j-mn, 1) << " \n"[j==a[i]];
    }
    return 0;
}