#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
#define d(aa, bb, cc, dd) cout<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<endl;
int ans = 0;

int main()
{
    int n; cin >> n;
    vector<int>a(n+1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int>list[n+1], dis(n+1, 0);
    for(int i = 2; i <= n; i++)
    {
        int x, y; cin >> x >> y;
        list[x].push_back(i);
        dis[i] = y;
    }
    long long presum[n+1] = {0};
    long long minsum[n+1] = {0};
    queue<int>Q;
    bool visit[n+1] = {0};
    Q.push(1);
    visit[1] = true;
    while(!Q.empty())
    {
        int u = Q.front(); Q.pop();
        int sz = list[u].size();
        for(int i = 0; i < sz; i++)
        {
            int v = list[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                presum[v] = presum[u]+dis[v];
                minsum[v] = min(minsum[u], presum[v]);
                if(presum[v] - minsum[u] > a[v])
                {
                    queue<int>q;
                    q.push(v);
                    ans++;
                    while(!q.empty())
                    {
                        int x = q.front(); q.pop();
                        int sz1 = list[x].size();
                        for(int j = 0; j < sz1; j++)
                        {
                            int y = list[x][j];
                            if(!visit[y])
                            {
                                visit[y] = true;
                                ans++;
                                q.push(y);
                            }
                        }
                    }
                }
                else Q.push(v);
            }
        }
    }
    cout << ans << endl;
    return 0;
}