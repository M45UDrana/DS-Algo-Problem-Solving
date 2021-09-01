#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        mp[x] = y;
    }
    cin >> n;
    for(int i = 0, x, y; i < n; i++)
    {
        cin >> x >> y;
        mp[x] = max(mp[x], y);
    }
    map<int,int>::iterator it;
    long long ans = 0;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        ans += it->second;
    }
    cout << ans << endl;
    return 0;
}