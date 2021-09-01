#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>>vp;
    for(int i = 0,x,y; i < 2; i++)
    {
        cin >> x >> y;
        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(), vp.end());
    vector<int> v;
    for(int i = 0; i < 2; i++)
    {
        v.push_back(vp[i].first);
        v.push_back(vp[i].second);
    }
    if(abs(v[0]-v[2]) != 0 and abs(v[1]-v[3]) != 0)
        if(abs(v[0]-v[2]) != abs(v[1]-v[3]))
            return !(cout << -1 << endl);

    int x = max(abs(v[0]-v[2]), abs(v[1]-v[3]));
    vector<int> ans;

    if(v[0]+x != v[2] or v[1] != v[3])
    {
        ans.push_back(v[0]+x);
        ans.push_back(v[1]);
    }
    if(v[0] != v[2] or v[1]+x != v[3])
    {
        ans.push_back(v[0]);
        ans.push_back(v[1]+x);
    }
    if(v[0]+x != v[2] or v[1]+x != v[3])
    {
        ans.push_back(v[0]+x);
        ans.push_back(v[1]+x);
    }
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}