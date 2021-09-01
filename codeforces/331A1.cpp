#include <bits/stdc++.h>

using namespace std;

#define int long long

const int oo = 1e16;

int32_t main()
{
    int n; cin >> n; 
    int a[n+1], neg[n+1]; 
    a[0] = 0; neg[0] = 0;
    map<int,pair<int,int> > mp;
    pair<int,int> zr = {0,0};
    for(int i = 1, x; i <= n; i++)
    {
        cin >> a[i];
        if(mp[a[i]] == zr)
            mp[a[i]] = make_pair(i,i);
        else 
            mp[a[i]].second = i;
        neg[i] = neg[i-1];
        if(a[i] < 0)
            neg[i]+=a[i];
        a[i] += a[i-1];
    }
    pair<int,pair<int,int> > ans = {-oo, {0, 0}};
    for(auto &it : mp)
    {
        int x = it.second.first, y = it.second.second;
        if(x != y)
        {
            int sum = (a[y] - a[x-1]) - (neg[y-1] - neg[x]);
            if(sum > ans.first)
                ans = make_pair(sum, make_pair(x, y));
        }
    }
    int x = ans.second.first, y = ans.second.second;
    vector<int> ind;
    for(int i = 1; i <= n; i++)
    {
        if(i < x or i > y)
            ind.push_back(i);
        else if(neg[i] < neg[i-1] and i != x and i != y)
            ind.push_back(i);
    }
    cout << ans.first << " " << ind.size() << endl;
    for(int i = 0; i < ind.size(); i++)
    {
        cout << ind[i] << " ";
        if(i == (int)ind.size()-1)
            cout << endl;
    }
    return 0;
}