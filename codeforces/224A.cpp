#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int s1, s2, s3, a, b, c;
    cin >> s1 >> s2 >> s3;
    a = sqrt((s1 * s3) / s2);
    b = sqrt((s1 * s2) / s3);
    c = sqrt((s2 * s3) / s1);
    cout << 4 * (a + b + c) << endl;

    return 0;
}