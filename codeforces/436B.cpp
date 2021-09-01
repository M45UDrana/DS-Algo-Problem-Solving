#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int ans[m];
    for(int j = 0; j < m; j++)
    {
        int cnt = 0;
        for(int i = 1; i < n; i++)
        {
            if(j-i >= 0 and s[i][j-i] == 'R')
                cnt++;
            if(j+i < m and s[i][j+i] == 'L')
                cnt++;
            if(i+i < n and s[i+i][j] == 'U')
                cnt++;
        }
        ans[j] = cnt;
    }
    for(int i = 0; i < m; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}