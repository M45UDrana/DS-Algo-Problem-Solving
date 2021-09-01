#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int mn = n/m, mx = (n+m-1)/m;
    vector<int> v[m+1], res(n+1), in;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        if(x > m or v[x].size() == mx)
            in.push_back(i);
        else
        {
            v[x].push_back(i);
            res[i] = x;
        }
    }

    for(int i = 1, l = 0; i <= m; i++)
    {
        if(v[i].size() < mn)
        {
            for(int j = 0; j < (mn-v[i].size()); j++)
                res[in[l++]] = i;
        }
    }
    cout << mn << " " << in.size() << endl;
    for(int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}