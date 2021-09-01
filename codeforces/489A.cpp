#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n), v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        v[i] = a[i];
    }
    sort(v.begin(), v.end());
    vector<pair<int,int> > ans;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != v[i])
        {
            int it = i;
            while(a[it] != v[i])
                it++;
            swap(a[i], a[it]);
            ans.push_back(make_pair(i,it));
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}