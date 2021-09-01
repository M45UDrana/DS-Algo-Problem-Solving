#include <bits/stdc++.h>

using namespace std;

#define int long long

int a[3][100002], n;
int dp[3][100002];
int rec(int i, int j)
{
    if(j == n)
        return 0;

    if(dp[i][j] != -1) return dp[i][j];
    int temp = a[i][j] + rec(i^1, j+1);
    int temp1 = rec(i, j+1);

    dp[i][j] = max(temp1, temp);
    return dp[i][j];
}

int32_t main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans = max(rec(0, 0), rec(1, 0));
    cout << ans << endl;

    return 0;
}

/*
5
9 3 5 7 3
5 8 1 4 5

29

3
1 2 9
10 1 1

19
*/