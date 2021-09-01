#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int> >v;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    int dp[n+1];
    memset(dp, 0, sizeof(dp));
    int in = 1;
    dp[in] = v[0].second;
    for(int i = 1; i < n; i++)
    {
        if(dp[in] < v[i].first)
        {
            in++;
            dp[in] = v[i].second;
        }
        else dp[in] = min(dp[in], v[i].second);
    }
    cout << in << endl;

    return 0;
}