#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    int cur = 1;
    for(int l = 0, x; l < k; l++)
    {
        cin >> x;
        x %= (n-l);
        for(int i = 0; i < x; i++)
        {
            cur++;
            if(cur == n+1)
                cur = 1;
            if(visit[cur])
                i--;
        }
        cout << cur << " ";
        visit[cur] = true;
        while(visit[cur])
        {
            cur++;
            if(cur == n+1)
                cur = 1;
        }
    }
    cout << endl;
    return 0;
}