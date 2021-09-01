#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int> > v;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        v.push_back(make_pair(x,i+1));
    }
    sort(v.begin(), v.end());
    vector<int> ans(n+1);
    int emp = 1;
    for(int i = 0; i < n; i++)
    {
        if(v[i].first <= emp)
        {
            ans[v[i].second] = emp;
            emp++;
        }
        else 
        {
            ans[v[i].second] = v[i].first;
            emp = v[i].first+1;
        }
    }
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}