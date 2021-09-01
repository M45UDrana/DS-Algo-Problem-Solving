#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], sum = 0, mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    sum -= mx;
    cout << (mx - sum) + 1 << endl;
    return 0;
}