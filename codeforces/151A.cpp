#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int dnk = (k * l) / nl, lim = c * d, slt = p / np;
    cout << min(dnk, min(lim, slt)) / n << endl;
    return 0;
}