#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+5;

int main()
{
    int n; cin >> n;
    int a[N];
    memset(a, 0, sizeof(a));
    for(int i = 0, in, p; i < n; i++)
    {
        cin >> in >> p;
        a[in] = p;
    }
    int dp[N], ans = 0;
    dp[0] = bool(a[0]);
    for(int i = 1; i < N; i++)
    {
        if(i-a[i] > 0)
            dp[i] = dp[i-a[i]-1] + bool(a[i]);
        else dp[i] = bool(a[i]);
        ans = max(ans, dp[i]);
    }
    cout << n-ans << endl;
    return 0;
}