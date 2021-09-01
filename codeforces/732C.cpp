#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long b, d, s; cin >> b >> d >> s;
    long long mx = max(b,max(d,s))-1, ans = 0;
    ans += max(mx - b, 0LL);
    ans += max(mx - d, 0LL);
    ans += max(mx - s, 0LL);
    cout << ans << endl;
    return 0;
}