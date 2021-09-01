#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, b, ans = 0; cin >> m >> b;
    long long x = 0, y = b;
    while(y >= 0)
    {
        ans = max(ans, (((y*y+y)/2)*(x+1)) + (((x*x+x)/2)*(y+1)));
        x += m;
        y--;
    }
    cout << ans << endl;
    return 0;
}