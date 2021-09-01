#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a[n];
    vector<pair<int, int>>v(n);
    vector<int>ans;
    for(int i = 0; i<n;i++)
    { 
        cin >> a[i];
        v[i].first = a[i]; v[i].second = i;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        int ind = v[i].second;
        bool flg = true;
        for(int j = 1; j<=x; j++)
        {
            if(ind - j >= 0)
            {
                if(a[ind] >= a[ind-j])
                    flg = false;
            }
        }
        
        for(int j = 1; j<=y; j++)
        {
            if(ind + j < n)
            {
                if(a[ind] >= a[ind+j])
                    flg = false;
            }
        }
        if(flg)
            ans.push_back(ind+1);
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
}