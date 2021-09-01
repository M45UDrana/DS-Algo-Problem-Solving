#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    map<int,int> mp;
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        char c; cin >> c;
        int x; cin >> x;
        if(c == '+')
        {
            mp[x] = 1;
            cnt++;
        }
        if(c == '-')
        {
            if(mp[x])
            {
                mp[x] = 0;
                cnt--;
            }
            else ans++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;

    return 0;
}