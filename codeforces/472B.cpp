#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int>a(n), mx(n, 0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());

    for(int i = 0; i < n; i++)
        mx[i/k] = max(mx[i/k], a[i]);
    int ans = 0;
    for(int i = 0; i < n and mx[i]; i++)
    {
        ans += abs(1-mx[i])*2;
    }
    cout << ans << endl;
    return 0;
}