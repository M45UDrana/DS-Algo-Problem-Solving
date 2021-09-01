#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    long long l = max(a, c), r = min(b, d);
    if(l <= k and k <= r)
        cout << max(r - l, 0LL) << endl;
    else cout << max(r+1 - l, 0LL) << endl;
    return 0;
}