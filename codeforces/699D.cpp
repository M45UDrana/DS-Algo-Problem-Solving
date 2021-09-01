#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    vector<int>rt, urt;
    for(int i = 1; i <= n; i++)
    {
        if(visit[i])
            continue;
        map<int,int> mp;
        int x = i;
        visit[x] = true;
        mp[x] = 1;
        while(!visit[a[x]])
        {
            x = a[x];
            visit[x] = true;
            mp[x] = 1;
        }
        if(x == a[x])
            rt.push_back(x);
        else if(mp[a[x]])
            urt.push_back(x);
        mp.clear();
    }
    int ans = 0;
    if(rt.size())
    {
        for(int i = 1; i < rt.size(); i++)
        {
            ans++;
            a[rt[i]] = rt[0];
        }
        for(int i = 0; i < urt.size(); i++)
        {
            ans++;
            a[urt[i]] = rt[0];
        }
    }
    else
    {
        ans++;
        a[urt[0]] = urt[0];
        for(int i = 1; i < urt.size(); i++)
        {
            ans++;
            a[urt[i]] = urt[0];
        }
    }
    cout << ans << endl;
    for(int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i == n];
    return 0;
}