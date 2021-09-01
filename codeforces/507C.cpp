#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll h, n; cin >> h >> n;
    ll m = pow(2, h), ans = 0;
    char dir = 'L', cur_dir;

    while(h)
    {
        cur_dir = (m/2 >= n) ? 'L' : 'R';

        ans += (cur_dir == dir) ? 1 : m;

        dir = (cur_dir == 'R') ? 'L' : 'R';

        m /= 2;
        if(n > m) n -= m;
        h--;
    }
    cout << ans << endl;
    return 0;
}