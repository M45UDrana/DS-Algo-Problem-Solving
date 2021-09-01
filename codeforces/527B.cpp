#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0; cin >> n;
    string s, t; cin >> s >> t;
    s = "-" + s;
    t = "-" + t;
    map<pair<int,int>, int> mp;
    pair<int,int> p = {-1, -1};
    int swp = 0;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] != t[i])
        {
            ans++;
            for(int j = 'a'; j <= 'z' and swp != 2; j++)
            {
                if(mp[{j, (int)s[i]}] > 0)
                {
                    if(j == (int)t[i])
                    {
                        swp = 2;
                        p = {i, mp[{j, (int)s[i]}]};
                        break;
                    }
                    else 
                    {
                        swp = 1;
                        p = {i, mp[{j, (int)s[i]}]};
                    }
                }
                if(mp[{(int)t[i], j}] > 0)
                {
                    swp = 1;
                    p = {i, mp[{(int)t[i], j}]};
                }
                
            }
            mp[{(int)s[i], (int)t[i]}] = i;
        }
    }
    cout << ans - swp << endl;
    cout << p.first << " " << p.second << endl;
    return 0;
}