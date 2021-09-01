#include <bits/stdc++.h>

using namespace std;

const int N = 1e3+3;
vector<int> dx = {1,0,-1,0};

int n, m, k; 
string s[N];
bool visit[N][N];
int in[N][N];
int res[N*N];
int ind;

void dfs(int i, int j)
{
    in[i][j] = ind;
    visit[i][j] = true;
    int y = 0;
    for(int x : dx)
    {
        if(0 <= i+x and i+x < n and 0 <= j+y and j+y < m)
        {
            if(s[i+x][j+y] == '*')
                res[ind]++;
            if(!visit[i+x][j+y])
                dfs(i+x, j+y);
        }
        y = x;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(s[i][j] == '*')
                visit[i][j] = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!visit[i][j])
            {
                ind++;
                dfs(i, j);
            }
        }
    }
    for(int i = 0; i < k; i++)
    {
        int u, v; cin >> u >> v;
        u--; v--;
        cout << res[in[u][v]] << endl;
    }
    return 0;
}