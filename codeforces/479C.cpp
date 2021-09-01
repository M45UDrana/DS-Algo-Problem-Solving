#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int> >v;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }
    int ans = 1;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(min(v[i].first, v[i].second) < ans)
            ans = max(v[i].first, v[i].second);
        else ans = min(v[i].first, v[i].second);
    }
    cout << ans << endl;
    return 0;
}