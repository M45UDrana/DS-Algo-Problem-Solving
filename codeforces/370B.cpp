#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int n; 
int m[101], ans[101];

void check(int i, int j)
{
    int cnt = 0;
    for(int k = 1; k <= 100; k++)
    {
        if(a[i][k] and a[j][k])
            cnt++;
    }
    if(cnt == m[i])
        ans[j] = 1;
    if(cnt == m[j])
        ans[i] = 1;
}
int main()
{
    cin >> n;
    memset(ans, 0, sizeof(0));
    for(int i = 0; i < n; i++)
    {
        cin >> m[i];
        for(int j = 0, x; j < m[i]; j++)
        {
            cin >> x;
            a[i][x] = 1;
        }
    }
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(i != j and !ans[j])
                check(i, j);
    for(int i = 0; i < n; i++)
    {
        if(ans[i])
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}