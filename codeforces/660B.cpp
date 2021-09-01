#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][4];
    int in = 1;
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n and in <= m; i++)
    {
        a[i][0] = in++; 
        if(in <= m)
            a[i][3] = in++;
    }
    for(int i = 0; i < n and in <= m; i++)
    {
        a[i][1] = in++; 
        if(in <= m)
            a[i][2] = in++;
    }
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        if(a[i][1] != 0)
            ans.push_back(a[i][1]);
        if(a[i][0] != 0)
            ans.push_back(a[i][0]);
        if(a[i][2] != 0)
            ans.push_back(a[i][2]);
        if(a[i][3] != 0)
            ans.push_back(a[i][3]);
    }
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}