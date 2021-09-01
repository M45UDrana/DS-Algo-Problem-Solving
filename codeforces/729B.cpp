#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m; cin >> n >> m;
    int a[n][m], ans[n][m];
    memset(ans, 0, sizeof(ans));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        bool flg = false;
        for(int j = 0; j < m; j++)
        {
            if(!a[i][j])
            {
                if(flg)
                    ans[i][j]++;
            }
            else flg = true;
        }
        flg = false;
        for(int j = m-1; j >= 0; j--)
        {
            if(!a[i][j])
            {
                if(flg)
                    ans[i][j]++;
            }
            else flg = true;
        }
    }
    for(int j = 0; j < m; j++)
    {
        bool flg = false;
        for(int i = 0; i < n; i++)
        {
            if(!a[i][j])
            {
                if(flg)
                    ans[i][j]++;
            }
            else flg = true;
        }
        flg = false;
        for(int i = n-1; i >= 0; i--)
        {
            if(!a[i][j])
            {
                if(flg)
                    ans[i][j]++;
            }
            else flg = true;
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            sum += ans[i][j];
    cout << sum << endl;
    return 0;
}