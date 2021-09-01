#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, p, vol = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> p;
        vol += p;
    }
    double ans = (double)vol / n;
    printf("%.12f", ans);
    return 0;
}