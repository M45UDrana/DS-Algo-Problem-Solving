#include <bits/stdc++.h>

using namespace std;

vector<int> ct, tr;

int main()
{
    int n, m; cin >> n >> m;
    ct.resize(n); tr.resize(m);
    for(int i = 0; i < n; i++)
        cin >> ct[i];
    for(int i = 0; i < m; i++)
        cin >> tr[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int dist = INT_MAX;
        int it = lower_bound(tr.begin(), tr.end(),ct[i])
            - tr.begin();
        if(it != m)
            dist = tr[it] - ct[i];
        it--;
        if(it != -1)
            dist = min(dist, ct[i] - tr[it]);
        ans = max(dist, ans);
    }
    cout << ans << endl;
    return 0;
}