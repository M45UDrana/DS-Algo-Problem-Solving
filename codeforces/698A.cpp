#include <bits/stdc++.h>

using namespace std;

int dp[2];

int main()
{
    int n; cin >> n;
    int day[n+1][2];
    memset(day, 0, sizeof(day));
    for(int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if(x == 1 or x == 3)
            day[i][0] = 1;
        if(x == 2 or x == 3)
            day[i][1] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        int d[2] = {0,0};
        d[0] = max(dp[0], dp[1]+day[i][0]);
        d[1] = max(dp[1], dp[0]+day[i][1]);
        dp[0] = d[0]; dp[1] = d[1];
    }
    cout << n - max(dp[0], dp[1]) << endl;
    return 0;
}