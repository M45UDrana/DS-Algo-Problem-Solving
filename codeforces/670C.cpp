#include <bits/stdc++.h>

using namespace std;
#define ff first
#define ss second

int main()
{
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    int m; cin >> m;
    vector<pair<pair<int,int>,int> > v(m);
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        v[i].ff.ff = mp[x];
        v[i].ss = i+1;
    }
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        v[i].ff.ss = mp[x];
    }
    sort(v.rbegin(),v.rend());
/*    for(int i = 0; i < m; i++)
        cout << v[i].ff.ff << " " << v[i].ff.ss <<
            " " << v[i].ss << endl; */
    cout << v[0].ss << endl;
    return 0;
}