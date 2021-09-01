#include <bits/stdc++.h>

using namespace std;
int a[4], coun;
int dp[4002];
int dynamic(int n)
{
    coun++;
    if(n < 0)
    {
        return -1e9;
    }
    if(n == 0)
        return 0;
    if(dp[n] != 0)
        return dp[n];

    dp[n] = max(dynamic(n - a[0]), max(dynamic(n - a[1]), dynamic(n - a[2]))) + 1;
    return dp[n];

}
int main()
{
    int n;
    cin >> n >> a[0] >> a[1] >> a[2];
    int ans = dynamic(n);
    cout << ans << endl;
    return 0;
}