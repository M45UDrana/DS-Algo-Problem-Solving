#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n; cin >> n;
    int ans[n*2+1];
    memset(ans, 0, sizeof(ans));
    vector<pair<int, pair<int, int > > > v;
    for(int i = 2; i <= n*2; i++)
    {
        for(int j = 1, x; j < i; j++)
        {
            cin >> x;
            v.push_back(make_pair(x, make_pair(i, j)));
        }
    }
    sort(v.begin(), v.end());
    for(int i = v.size()-1; i >= 0; i--)
    {
        if(!ans[v[i].ss.ff] and !ans[v[i].ss.ss])
        {
            ans[v[i].ss.ff] = v[i].ss.ss;
            ans[v[i].ss.ss] = v[i].ss.ff;
        }
    }
    for(int i = 1; i <= n*2; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}