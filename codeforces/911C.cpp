#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(a[0] == 1)
        cout << "YES" << endl;
    else if(a[0] == 2 and a[1] == 2)
        cout << "YES" << endl;
    else if(a[0] == 2 and a[1] == 4 and
            a[2] == 4)
        cout << "YES" << endl;
    else if(a[0] == 3 and a[2] == 3)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}