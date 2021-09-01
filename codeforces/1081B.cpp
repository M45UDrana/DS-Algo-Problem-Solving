#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v[n+1];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        v[x].push_back(i);
    }
    int ans[n+1], c = 0;
    for(int i = 0; i < n; i++)
    {
        if((int)v[i].size()%(n-i) != 0)
            return !(cout << "Impossible" << endl);
        for(int j = 0; j < v[i].size(); j++)
        {
            if(j%(n-i) == 0)
                c++;
            ans[v[i][j]] = c;
        }
    }
    cout << "Possible" << endl;
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i==n];
    return 0;
}