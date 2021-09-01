#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+2;

int main()
{
    int n; cin >> n;
    vector<pair<int,int> > v[N];
    map<int, vector<pair<int,int> > > mp;
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        mp[y-x].push_back(make_pair(x*-1,y*-1));
    }  
    for(auto& it : mp)
        sort(it.second.begin(),it.second.end());

    int x = -1, y = -1;
    vector<pair<int,int> > ans;
    for(int i = 0; i < n; i++)
    {
        int c; cin >> c;
        if(mp[c].size() == 0)
            return !(cout << "NO" << endl);
        pair<int,int> p = mp[c].back();
        mp[c].pop_back();
        p.first *= -1; p.second *= -1;
        ans.push_back(make_pair(p.first, p.second));
        if((x >= p.first and y > p.second) or 
                (x > p.first and y >= p.second))
            return !(cout << "NO" << endl);
        x = p.first; y = p.second;
    }
    cout << "YES" << endl;
    for(auto it : ans)
        cout << it.first << " " << it.second << endl;
    return 0;
}