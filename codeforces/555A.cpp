#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int>v[k];
    int ans = 0;
    for(int i = 0; i < k; i++)
    {
        int m, cnt = 0; cin >> m;
        for(int j = 0, x, y = 1; j < m; j++)
        {
            cin >> x;
            v[i].push_back(x);
            if(x == y)
            {
                cnt++;
                y++;
            }
        }
        m -= max(0, cnt-1);
        ans += 2*m-1;
    }
    cout << ans-1 << endl;
    return 0;
}