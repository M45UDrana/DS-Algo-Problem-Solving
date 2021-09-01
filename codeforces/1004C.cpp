#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int main()
{
    int n; cin >> n;
    bool used[N];
    memset(used, 0, sizeof(used));
    int pre[n+2], suf[n+2];
    memset(pre, 0, sizeof(pre));
    memset(suf, 0, sizeof(suf));
    int a[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(!used[a[i]])
        {
            pre[i] = pre[i-1]+1;
            used[a[i]] = 1;
        }
        else pre[i] = pre[i-1];
    }
    memset(used, 0, sizeof(used));
    for(int i = n; i > 0; i--)
    {
        if(!used[a[i]])
        {
            suf[i] = suf[i+1]+1;
            used[a[i]] = 1;
        }
        else suf[i] = suf[i+1];
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(pre[i] > pre[i-1])
            ans += suf[i+1];
    }
    cout << ans << endl;
    return 0;
}