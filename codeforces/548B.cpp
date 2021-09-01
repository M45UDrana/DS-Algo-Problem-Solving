#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    int a[n][m];
    int ans[n];
    memset(ans, 0, sizeof(ans));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0, cnt = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j])
            {
                cnt++;
                ans[i] = max(ans[i], cnt);
            }
            else cnt = 0;
        }
    }

    for(int qq = 0,i,j; qq < q; qq++)
    {
        cin >> i >> j; i--; j--;
        if(a[i][j])
            a[i][j] = 0;
        else
            a[i][j] = 1;
        int max_ans = 0;
        ans[i] = 0;
        for(int j = 0, cnt = 0; j < m; j++)
        {
            if(a[i][j])
            {
                cnt++;
                ans[i] = max(ans[i], cnt);
            }
            else cnt = 0;
        }
        for(int j = 0; j < n; j++)
            max_ans = max(max_ans, ans[j]);
        cout << max_ans << endl;
    }
    return 0;
}