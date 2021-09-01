#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    vector<int> cyl;
    for(int i = 1; i <= n; i++)
    {
        int x = i, cnt = 0;
        while(!visit[x])
        {
            cnt++;
            visit[x] = true;
            x = a[x];
        }
        if(cnt) cyl.push_back(cnt);
    }
    sort(cyl.begin(), cyl.end());

    int m = cyl.size()-1;
    ll ans = 0;
    if(m > 0)
    {
        ans += (ll(cyl[m]) + cyl[m-1]) * 
            (ll(cyl[m]) + cyl[m-1]);
        cyl.pop_back(); cyl.pop_back();
    }

    for(ll x: cyl) 
        ans += x * x;
    cout << ans << endl;
    return 0;
}