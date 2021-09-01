#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'W')
            {
                int x = 0;
                for(int y : {1, 0, -1, 0})
                {
                    if(0 <= i+x and i+x < n and 0 <= j+y and j+y < m)
                    {
                        if(s[i+x][j+y] == '.')
                        {
                            s[i+x][j+y] = 'D';
                        }
                        else if(s[i+x][j+y] == 'S')
                        {
                            ok = false;
                            cout << "No" << endl;
                            break;
                        }
                    }
                    x = y;
                }
            }
            if(!ok)
                break;
        }
        if(!ok)
            break;
    }
    if(ok)
    {
        cout << "Yes" << endl;
        for(int i = 0; i < n; i++)
            cout << s[i] << endl;
    }
    return 0;
}