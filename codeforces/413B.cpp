#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> in_m[m+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1,x; j <= m; j++)
        {
            cin >> x;
            if(x)
                in_m[j].push_back(i);
        }
    }
    int ans[n+1], vl_m[m+1];
    memset(ans, 0, sizeof(ans));
    memset(vl_m, 0, sizeof(vl_m));
    for(int i = 0,x,y; i < k; i++)
    {
        cin >> x >> y;
        vl_m[y]++;
        ans[x]--;
    }
    for(int i = 1; i <= m; i++)
    {
        for(int j = 0; j < in_m[i].size(); j++)
        {
            ans[in_m[i][j]] += vl_m[i];
        }
    }
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}