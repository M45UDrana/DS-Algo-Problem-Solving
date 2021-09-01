#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+5;
int n, m; 
string s[N];
bool visit[N][N][5][3];

bool dfs(int i, int j, int d, int c)
{
    if(i < 0 or j < 0 or i == n or j == m)
        return false;
    if(s[i][j] == '*' or visit[i][j][d][c] or c > 2)
        return false;
    if(s[i][j] == 'T')
        return true;

    visit[i][j][d][c] = true;

    bool ok = false;  
    ok |= dfs(i+1, j, 1, c + (d != 1));
    ok |= dfs(i-1, j, 2, c + (d != 2));
    ok |= dfs(i, j+1, 3, c + (d != 3));
    ok |= dfs(i, j-1, 4, c + (d != 4));
    return ok;
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'S')
            { 
                visit[i][j][1][0] = true;
                visit[i][j][2][0] = true;
                visit[i][j][3][0] = true;
                visit[i][j][4][0] = true;
                bool ok = false;
                ok |= dfs(i+1, j, 1, 0);
                ok |= dfs(i-1, j, 2, 0);
                ok |= dfs(i, j+1, 3, 0);
                ok |= dfs(i, j-1, 4, 0);

                if(ok)
                    cout << "YES" << endl;
                else cout << "NO" << endl;
                return false;
            }
        }
    }
    return 0;
}