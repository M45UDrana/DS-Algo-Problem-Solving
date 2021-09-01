#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++)
        cin >> a[i];
    long long ans = a[0] - 1;
    for(int i = 1; i < m; i++)
    {
        if(a[i-1] < a[i])
        {
            ans += a[i] - a[i-1];
        }
        else if(a[i-1] > a[i])
        {
            ans += (a[i] + (n - a[i-1]));
        }
    }
    cout << ans << endl;
    return 0;
}