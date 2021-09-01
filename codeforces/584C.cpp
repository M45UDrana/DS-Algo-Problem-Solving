#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    string s, g, ans = string(n, '-');
    cin >> s >> g;
    vector<int> eq_in, u_in;
    int q = n-t;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == g[i])
        {
            if(q)
            {
                ans[i] = s[i];
                q--;
            }
            else
                eq_in.push_back(i);
        }
        else u_in.push_back(i);
    }
    if(q)
    {
        for(int i = 0, in; i < q; i++)
        {
            if(u_in.size() < 2)
                return !(cout << -1 << endl);
            in = u_in.back(); u_in.pop_back();
            ans[in] = s[in];
            in = u_in.back(); u_in.pop_back();
            ans[in] = g[in];
            t--;
        }
        q = 0;
    }
    else 
    {
        while(eq_in.size())
        {
            int in = eq_in.back(); eq_in.pop_back();
            if(s[in] == 'm')
                ans[in] = 'n';
            else ans[in] = 'm';
            t--;
        }
    }
    if(u_in.size() != t)
        return !(cout << -1 << endl);
    while(u_in.size())
    {
        int in = u_in.back(); u_in.pop_back();
        char c = 'm';
        if(max(s[in], g[in]) == c)
            c = 'n';
        else if(min(s[in],g[in]) == c)
            c = 'l';
        ans[in] = c;
    }
    cout << ans << endl;
    return 0;
}