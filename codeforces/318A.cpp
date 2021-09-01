#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    long long n, k, ans = 0;
    cin >> n >> k;
    if(n % 2 == 0)
        n /= 2;
    else
        n = (n/2) + 1;

    if(n < k)
        ans += (k - n) * 2;
    else ans += 1 + ((k - 1) * 2);

    cout << ans << endl;

    return 0;
}