#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[9];
    for(int i = 0; i < 9; i++)
    {
        s[i] = "";
        for(int j = 0; j < 9; j++)
        {
            char c; cin >> c;
            s[i] += c;
        }
    }
    int r, c; cin >> r >> c;
    while(r > 3)
        r -= 3;
    while(c > 3)
        c -= 3;
    r *= 3;
    c *= 3;
    bool ok = true;
    for(int i = r-3; i < r; i++)
    {
        for(int j = c-3; j < c; j++)
        {
            if(s[i][j] == '.')
            {
                s[i][j] = '!';
                ok = false;
            }
        }
    }
    if(ok)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(s[i][j] == '.')
                    s[i][j] = '!';
            }
        }
    }
    for(int i = 0; i < 9; i++)
    {
        if(i and i%3 == 0)
            for(int j = 0; j < 9; j++)
                cout << " \n"[j+1==9];
        for(int j = 0; j < 9; j++)
        {
                if(j and j%3 == 0)
                    cout << ' ';
                cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}