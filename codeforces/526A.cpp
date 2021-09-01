#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 1; i < n; i++)
    {
        int dp[n];
        memset(dp, 0, sizeof(dp));
        for(int j = 0; j+i < n; j++)
        {
            if(s[j] == '*' and s[j+i] == '*')
                dp[j+i] = dp[j]+1;
            if(dp[j+i] >= 4)
                return !(cout << "yes" << endl);
        }
    }
    cout << "no" << endl;
    return 0;
}