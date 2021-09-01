#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, ans = 0, pret = 0; cin >> n >> q;
    queue<int> Qar[n+1], Qint;
    bool visit[q+1];
    memset(visit, 0, sizeof(visit));
    for(int i = 1; i <= q; i++)
    {
        int x; cin >> x;
        if(x == 1)
        {
            int in; cin >> in;
            Qar[in].push(i);
            Qint.push(i);
            ans++;
        }
        else if(x == 2)
        {
            int in; cin >> in;
            while(!Qar[in].empty())
            {
                int x = Qar[in].front(); Qar[in].pop();
                if(!visit[x])
                {
                    ans--;
                    visit[x] = true;
                }
            }
        }
        else 
        {
            int t; cin >> t;
            while(pret < t)
            {
                int x = Qint.front(); Qint.pop();
                pret++;
                if(!visit[x])
                {
                    ans--;
                    visit[x] = true;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}