#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t; cin >> s >> t;
    int n = s.size();
    vector<int> v[30];
    for(int i = 0; i < n; i++)
    {
        v[s[i]-'a'].push_back(t[i]-'a');
        v[t[i]-'a'].push_back(s[i]-'a');
    }
    vector<pair<char,char> >ans;
    for(int i = 0; i < 30; i++)
    {
        sort(v[i].begin(), v[i].end());
        v[i].resize(unique(v[i].begin(),v[i].end())-v[i].begin());
    }
    for(int i = 0; i < 30; i++)
    {
        if(v[i].size() > 1)
            return !(cout << -1 << endl);
        if(v[i].size() == 0 or i == v[i][0]) continue;
        if(v[v[i][0]][0] != i)
            return !(cout << -1 << endl);
        ans.push_back(make_pair(i+'a', v[i][0]+'a'));
        if(v[v[i][0]].size() > 1)
            return !(cout << -1 << endl);
        v[i].clear();
        v[v[i][0]].clear();
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}