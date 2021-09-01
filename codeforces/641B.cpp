#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, q; cin >> n >> m >> q;
    int a[n][m];
    memset(a, 0, sizeof(a));
    vector<vector<pair<int,int> > >v(n, vector<pair<int,int>>(m));
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[i].size(); j++)
            v[i][j] = make_pair(i, j);
    }

    for(int ii = 0; ii < q; ii++)
    {
        int t, r, c, x; cin >> t;
        if(t == 1)
        {
            cin >> r; r--;
            pair<int,int> tmp = v[r][0];
            for(int i = 1; i < m; i++)
                v[r][i-1] = v[r][i];
            v[r][m-1] = tmp;
        }
        else if(t == 2)
        {
            cin >> c; c--;
            pair<int,int> tmp = v[0][c];
            for(int i = 1; i < n; i++)
                v[i-1][c] = v[i][c];
            v[n-1][c] = tmp;
        }
        else 
        {
            cin >> r >> c >> x; r--; c--;
            a[v[r][c].first][v[r][c].second] = x;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}