#include<bits/stdc++.h> 

using namespace std;
const int Max = 2e4+7;
int m;
bool visit[Max] = {0};
int dis[Max] = {0};
queue<int>Q;

int bfs(int u)
{
    Q.push(u);
    visit[u] = true;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        int v = u*2;
        if(v < Max && v >= 0 && !visit[v])
        {
            Q.push(v);
            visit[v] = true;
            dis[v] = dis[u]+1;
            if(v==m)
                break;
        }

        v = u-1;
        if(v < Max && v >= 0 && !visit[v])
        {
            Q.push(v);
            visit[v] = true;
            dis[v] = dis[u]+1;
            if(v==m)
                break;
        }
    }
    return dis[m];
}

int main() 
{ 
    int n; cin >> n >> m;
    if(m == n)
        cout << 0 << endl;
    else 
        cout << bfs(n) << endl;
    return 0;
}