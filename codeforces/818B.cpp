#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++)
        cin >> a[i];
    int ans[n+1];
    memset(ans, 0, sizeof(ans));
    vector<int> used[n+1];

    for(int i = 0, x; i < m-1; i++)
    {
        x = a[i+1] - a[i];
        if(x < 1) x += n;
        if(ans[a[i]] and ans[a[i]] != x)
            return !(cout << -1 << endl);
        ans[a[i]] = x;
        used[x].push_back(a[i]);
    }
    vector<int>v;
    for(int i = 1; i <= n; i++)
    {
        sort(used[i].begin(),used[i].end());
        used[i].resize(unique(used[i].begin(),
                    used[i].end()) - used[i].begin());
        if(used[i].size() == 0)
            v.push_back(i);
        else if(used[i].size() > 1)
            return !(cout << -1 << endl);
    }
    for(int i = 1; i <= n; i++)
    {
        if(ans[i])
            cout << ans[i] << " \n"[i == n];
        else
        {
            cout << v.back() << " \n"[i == n];
            v.pop_back();
        }
    }
    return 0;
}