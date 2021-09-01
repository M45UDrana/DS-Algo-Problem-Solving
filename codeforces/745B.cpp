#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int min_j = m, max_j = 0, min_i = n, max_i = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'X')
            {
                min_j = min(min_j, j);
                max_j = max(max_j, j);
                min_i = min(min_i, i);
                max_i = max(max_i, i);
            }
        }
    }
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == '.' and(min_j <= j and max_j >= j) 
                and (min_i <= i and max_i >= i))
            {
                ok = false;
                break;
            }
        }
        if(!ok)
            break;
    }
    if(ok)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}