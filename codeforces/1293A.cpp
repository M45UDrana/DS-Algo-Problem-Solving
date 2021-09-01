#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, s, k; cin >> n >> s >> k;
        map<int,int> mp;
        for(int i = 0, x; i < k; i++)
        {
            cin >> x;
            mp[x] = 1;
        }
        int res = oo;
        for(int i = s-1001; i <= n and i <= s+1000; i++)
        {
            if(i > 0 and (!mp[i]))
            {
                res = min(res, abs(s-i));
            }
        }
        for(int i = s; i >= 1 and i >= (s-1000); i--)
        {
            if(!mp[i])
            {
                res = min(res, abs(s-i));
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}