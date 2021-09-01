#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(i)
        {
            if(a[i]+a[i-1] < k)
            {
                ans += abs(k - (a[i]+a[i-1]));
                a[i] += abs(k - (a[i]+a[i-1]));
            }
        }
    }
    cout << ans << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}