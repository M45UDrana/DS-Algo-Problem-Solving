#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    if(c == 0 and a == b)
        cout << "YES" << endl;
    else if((b-a)%c == 0 and c > 0 and b >= a)
        cout << "YES" << endl;
    else if((b-a)%c == 0 and c < 0 and b <= a)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}