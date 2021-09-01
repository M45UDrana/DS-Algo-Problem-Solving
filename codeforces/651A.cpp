#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int ans = 0;
    int x;
    while(a > 2 or b > 2)
    {
        x = (a-1)/2;
        a -= x*2;
        b += x;
        ans += x;
        x = (b-1)/2;
        b -= x*2;
        a += x;
        ans += x;
    }
    if(a == 2 or b == 2)
        cout << ans + 1 << endl;
    else cout << ans << endl;
    return 0;
}