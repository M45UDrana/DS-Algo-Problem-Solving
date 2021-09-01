#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m;
    map<int,int>mp;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        mp[x] = 1;
    }
    vector<int> ans;
    int i = 1;
    while(i <= m)
    {
        if(mp[i] == 0)
        {
            ans.push_back(i);
            m -= i;
        }
        i++;
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    if(ans.size() != 0)
        cout << endl;
    return 0;
}