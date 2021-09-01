#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i = 0; i < m; i++)
    {
        if( a[i] <= 0)
            ans += (a[i] * -1);
        else break;
    }
    cout << ans << endl;
    return 0;
}