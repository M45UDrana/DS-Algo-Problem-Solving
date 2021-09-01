#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    string guest, host, name, pile;
    cin >> guest >> host >> pile;
    name = guest + host;
    sort(name.begin(), name.end());
    sort(pile.begin(), pile.end());
    if(name == pile)    cout << "YES" << endl;
    else                cout << "NO" << endl;

    return 0;
}