#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
#define d(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

int dp[10][10];

int dfs(int x, int y, int st, int end)
{
    bool visit[10] = {0};
    int dist[10]; memset(dist, -1, sizeof(dist));
    queue<int>Q;
    Q.push(st);
    visit[st] = true;
    dist[st] = 0;
    while(!Q.empty())
    {
        int u = Q.front(); Q.pop();
        int v = (u+x)%10;
        if(!visit[v] || v == end)
        {
            visit[v] = true;
            dist[v] = dist[u]+1;
            Q.push(v);
            if(v == end)
                break;
        }
        v = (u+y)%10;
        if(!visit[v] || v == end)
        {
            visit[v] = true;
            dist[v] = dist[u]+1;
            Q.push(v);
            if(v == end)
                break;
        }
    }
    return dist[end];
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    string s; cin >> s;
    int len = s.size();
    for(int x = 0; x < 10; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            memset(dp, 0, sizeof(dp));
            int ans = 0;
            for(int i = 0; i < len-1; i++)
            {
                int st = int(s[i]-'0'), end = int(s[i+1]-'0');
                if(dp[st][end] == 0)
                   dp[st][end] = dfs(x, y, st, end);
                if(dp[st][end] == -1)
                {
                    ans = -1;
                    break;
                }
                ans += dp[st][end]-1; 
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}