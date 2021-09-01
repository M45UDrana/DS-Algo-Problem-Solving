#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);


int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int pos = a + 1, ans = 0;
    for(; pos <= n; pos++)
    {
        if(n-pos <= b)
            ans++;
    }
    cout << ans << endl;
    return 0;
}