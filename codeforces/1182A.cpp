#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a % 2 == 0)
    {
        int ans = pow(2, a/2);
        cout << ans << endl;
    }
    else cout << 0 << endl;
    return 0;
}