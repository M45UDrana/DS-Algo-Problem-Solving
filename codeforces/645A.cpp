#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "", g = "", x;

    cin >> x;
    if(x[0] != 'X')
        s += x[0];
    if(x[1] != 'X')
        s += x[1];
    cin >> x;
    if(x[1] != 'X')
        s += x[1];
    if(x[0] != 'X')
        s += x[0];

    cin >> x;
    if(x[0] != 'X')
        g += x[0];
    if(x[1] != 'X')
        g += x[1];
    cin >> x;
    if(x[1] != 'X')
        g += x[1];
    if(x[0] != 'X')
        g += x[0];
    g += g + g;
    for(int i = 0; i < 7; i++)
    {
        if(s[0] == g[i] and s[1] == g[i+1] and s[2] == g[i+2])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}