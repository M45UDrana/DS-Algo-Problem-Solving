#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    s = " " + s;
    int ans = 0, cur = n;
    vector<int> mp(n*2+100, -1);
    mp[cur] = 0;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == '1')
            cur++;
        else cur--;
        if(mp[cur] == -1) mp[cur] = i;
        else ans = max(ans, i - mp[cur]);
    }
    cout << ans << endl;
    return 0;
}