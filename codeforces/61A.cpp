#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    string a, b;
    cin >> a >> b;
    for(int i = 0, len = a.size(); i < len; i++)
    {
        if(a[i] == b[i])
            cout << 0;
        else cout << 1;

    }
    return 0;
}