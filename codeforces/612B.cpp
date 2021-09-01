#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    int n; cin >> n;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v[i] = make_pair(x,i+1);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i = 1; i < n; i++)
        ans += abs(v[i].second-v[i-1].second);
    cout << ans << endl;
    return 0;
}