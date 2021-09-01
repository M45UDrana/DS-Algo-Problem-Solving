#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n+1][n+1];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < m; i++)
    {
        int x, y; 
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    vector<pair<int,int>>v, c;
    int ans = 0;
    while(1)
    {
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                if(a[i][j] == 1)
                    v.push_back(make_pair(i, j));
            }
            if(v.size() == 1)
                c.push_back(make_pair(v[0].first, v[0].second));
            v.clear();
        }
        if(c.size() > 0)
        {
            for(int i = 0; i < c.size(); i++)
            {
                a[c[i].first][c[i].second] = 0;
                a[c[i].second][c[i].first] = 0;
            }
            ans++;
        }
        else break;
        c.clear();
    }
    cout << ans << endl;
    return 0;
}