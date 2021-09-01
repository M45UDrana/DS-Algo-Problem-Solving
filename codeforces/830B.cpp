#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+7;
int root[N];
int cnt[N];

int find(int x)
{
    if(cnt[root[x]] == -1 and root[x] != x)
        root[x] = find(root[x]);
    return root[x];
}
int main()
{
    int n; cin >> n;
    vector<int> a(n), v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i];
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++)
        root[v[i]] = v[i-1];

    for(int i = 0; i < n; i++)
    {
        if(cnt[root[a[i]]])
        {
            int x = find(a[i]);
            cnt[x]++;
            if(x != a[i])
                cnt[a[i]] = -1;
        }
        else
            cnt[a[i]]++;
    }
    long long ans = 0;
    for(int i = 1; i < N; i++)
    {
        if(cnt[i] > 0)
        {
            ans += n;
            n -= cnt[i];
        }
    }
    cout << ans << endl;
    return 0;
}