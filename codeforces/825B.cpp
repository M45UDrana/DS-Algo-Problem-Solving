#include <bits/stdc++.h>

using namespace std;
const int n = 10;
string s[n];

bool check(int i, int j)
{
    if(i < 0 or j < 0 or i >= n or j >= n)
        return false;
    return true;
}

bool axis_x(int i, int j)
{
    int czr = 0, cdt = 0;
    for(int k = 0; k < 5; k++)
    {
        if(check(i, j+k))
        {
            if(s[i][j+k] == 'X')
                czr++;
            else if(s[i][j+k] == '.')
                cdt++;
        }
        else break;
    }
    if((czr == 4 and cdt == 1) or czr == 5)
        return true;
    return false;
}

bool axis_y(int i, int j)
{
    int czr = 0, cdt = 0;
    for(int k = 0; k < 5; k++)
    {
        if(check(i+k, j))
        {
            if(s[i+k][j] == 'X')
                czr++;
            else if(s[i+k][j] == '.')
                cdt++;
        }
        else break;
    }
    if((czr == 4 and cdt == 1) or czr == 5)
        return true;
    return false;
}

bool axis_zp(int i, int j)
{
    int czr = 0, cdt = 0;
    for(int k = 0; k < 5; k++)
    {
        if(check(i+k, j+k))
        {
            if(s[i+k][j+k] == 'X')
                czr++;
            else if(s[i+k][j+k] == '.')
                cdt++;
        }
        else break;
    }
    if((czr == 4 and cdt == 1) or czr == 5)
        return true;
    return false;
}

bool axis_zn(int i, int j)
{
    int czr = 0, cdt = 0;
    for(int k = 0; k < 5; k++)
    {
        if(check(i+k, j-k))
        {
            if(s[i+k][j-k] == 'X')
                czr++;
            else if(s[i+k][j-k] == '.')
                cdt++;
        }
        else break;
    }
    if((czr == 4 and cdt == 1) or czr == 5)
        return true;
    return false;
}

int main()
{
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            bool flg = false;
            flg |= axis_x(i,j);
            flg |= axis_y(i,j);
            flg |= axis_zp(i,j);
            flg |= axis_zn(i,j);
            if(flg)
                return !(cout << "YES" << endl);
        }
    }
    cout << "NO" << endl;
    return 0;
}