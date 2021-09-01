#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n; 
    map<int, int>mp;
    vector<pair<int,int> >ans;
    for(int i = 1,x, in = 0; i <= n; i++)
    {
        cin >> x;
        if(mp[x] > in)
        {
            ans.push_back(make_pair(in+1, i));
            in = i;
        }
        mp[x] = i;
    }
    if(ans.size() == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        if((int)ans.size()-1 != i)
            cout << ans[i].first << " " << ans[i].second << endl;
        else cout << ans[i].first << " " << n << endl;
    }
    return 0;
}