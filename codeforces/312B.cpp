#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    a *= d;
    c *= b;
    cout << setprecision(12) << (a+a) / (a+a+c) << endl;
    return 0;
}