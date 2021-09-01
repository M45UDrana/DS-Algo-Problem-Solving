#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, l, r, left0 = 0, left1 = 0, riht0 = 0, riht1 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> l >> r;
        (l == 0) ? left0++ : left1++;
        (r == 0) ? riht0++ : riht1++;
    }
    cout << min(left0, left1) + min(riht0, riht1) << endl;
    return 0;
}