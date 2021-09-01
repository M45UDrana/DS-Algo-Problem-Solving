#include <bits/stdc++.h>

using namespace std;

int n, m, k, cnt;
string s[51];
bool visit[51][51], ok;
vector<pair<int,pair<int,int> > > cmp;

void dfs(int i, int j)
{
    if(i < 0 or i >= n or j < 0 or j >= m)
        return;
    if(visit[i][j] or s[i][j] == '*')
        return;
    visit[i][j] = true;
    if(i == 0 or i == n-1 or j == 0 or j == m-1)
       ok = false; 
    cnt++;
    dfs(i, j+1);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i-1, j);
}

void dfs2(int i, int j)
{
    if(s[i][j] == '*')
        return;
    s[i][j] = '*';
    dfs2(i, j+1);
    dfs2(i+1, j);
    dfs2(i, j-1);
    dfs2(i-1, j);
}
int main()
{
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    memset(visit, 0, sizeof(visit));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            ok = true; cnt = 0;
            if(s[i][j] == '.')
            {
                dfs(i, j);
                if(ok and cnt)
                    cmp.push_back(make_pair(cnt,make_pair(i,j)));
            }
        }
    }
    sort(cmp.begin(),cmp.end(), greater<pair<int,pair<int,int>>>());
    int ans = 0;
    for(int i = k; i < cmp.size(); i++)
    {
        ans += cmp[i].first;
        dfs2(cmp[i].second.first,cmp[i].second.second);
    }

    cout << ans << endl;
    for(int i = 0; i < n; i++)
       cout << s[i] << endl; 
    return 0;
}