#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w; cin >> n >> w;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    int ans[n];
    for(int i = 0; i < n; i++)
    {
        ans[i] = (v[i].first+1)/2;
        w -= ans[i];
    }
    if(w < 0)
        return !(cout << -1 << endl);
    for(int i = n-1; i >= 0; i--)
    {
        int x = min(v[i].first-ans[i], w);
        w -= x;
        ans[i] += x;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(v[j].second == i)
            {
                cout << ans[j] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}