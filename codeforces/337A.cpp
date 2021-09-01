#include <bits/stdc++.h>

using namespace std;
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int m, n, ans = 1000;
    cin >> n >> m;
    int a[m]; n--;
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);

    for(int i = 0; i < m - n; i++)
    {
        int tmp = a[i+n] - a[i];
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}