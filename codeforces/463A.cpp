#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<pair<int,int> > v;
    for(int i = 0; i < n; i++)
    {
        int d, c; cin >> d >> c;
        v.push_back(make_pair(d,c));
    }
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        if(v[i].first < m and v[i].second != 0)
            ans = max(ans, 100-v[i].second);
        if(v[i].second == 0 and v[i].first <= m)
            ans = max(ans, 0);
    }
    cout << ans << endl;
    return 0;
}