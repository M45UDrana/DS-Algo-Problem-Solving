#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, y; cin >> n >> m >> x >> y;
    string s; cin >> s;
    bool visit[n][m];
    memset(visit, 0, sizeof(visit));
    x--; y--;
    visit[x][y] = 1;
    int cnt = 1, ans;
    cout << 1;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == 'U') x = max(x-1, 0);
        else if(s[i] == 'D') x = min(x+1, n-1);
        else if(s[i] == 'R') y = min(y+1, m-1);
        else y = max(y-1, 0);
        if(visit[x][y]) cout << " " << 0;
        else 
        {
            visit[x][y] = 1;
            cout << " " << 1;
            cnt++;
        }
    }
    cout << " " << n*m-cnt << endl;
    return 0;
}