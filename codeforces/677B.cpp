#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, h, k; cin >> n >> h >> k;
    long long cur = 0, wait, ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> wait;
        if(cur+wait > h)
        {
            ans += cur/k;
            cur %= k;
        }
        if(cur+wait > h)
        {
            cur = 0;
            ans++;
        }
        cur += wait;
    }
    ans += ((cur+k-1)/k);
    cout << ans << endl;
    return 0;
}