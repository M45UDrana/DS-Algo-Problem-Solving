#include <bits/stdc++.h>

using namespace std;
int n, m;
int a[22][22];

bool check()
{
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < m; j++)
        {
            cnt += (a[i][j] != j+1);
        }
        if(cnt > 2) return false;
    }
    return true;
}
int main()
{
    cin >> n >> m; 
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int k = 0; k < n; k++)
                swap(a[k][i], a[k][j]);
            if(check())
                return !(cout << "YES" << endl);
            for(int k = 0; k < n; k++)
                swap(a[k][i], a[k][j]);
        }
    }
    cout << "NO" << endl;
    return 0;
}