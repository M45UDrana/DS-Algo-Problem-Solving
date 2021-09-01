#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+1;
int a[N];

int main()
{
    int n; cin >> n;
    vector<pair<int, int> > v;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
        a[y] = 1;
    }
    int ans[n];
    for(int i = 0; i < n; i++)
    {
        if(!a[v[i].first])
        {
            ans[0] = v[i].first;
            break;
        }
    }
    sort(v.begin(), v.end());
    int in = lower_bound(v.begin(), v.end(), make_pair(0, 0)) - v.begin();
    ans[1] = v[in].second;
    for(int i = 0, x; i < n-2; i++)
    {
        x = lower_bound(v.begin(), v.end(), make_pair(ans[i], 0)) - v.begin();
        ans[i+2] = v[x].second;
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}