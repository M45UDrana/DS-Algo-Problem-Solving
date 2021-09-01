#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+7;

int main()
{
    int n; cin >> n;
    vector<int>bin;
    for(int i = 1; i <= 64; i++)
    {
        int x = i, m = 0, j = 8;
        while(j >= 0)
        {
            m *= 10;
            m += bool(x&(1<<j));
            j--;
        }
        bin.push_back(m);
    }
    vector<pair<int,int> > dp(n+1);
    for(int i = 1; i <= n; i++)
        dp[i].first = inf;
    dp[0].first = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < bin.size(); j++)
        {
            int x = i + bin[j];
            if(x <= n and dp[x].first > dp[i].first+1)
            {
                dp[x] = make_pair(dp[i].first+1, i);
            }
        }
    }
    cout << dp[n].first << endl;
    while(n)
    {
        cout << n - dp[n].second << " ";
        n = dp[n].second;
        if(!n)
            cout << endl;
    }
    return 0;
}