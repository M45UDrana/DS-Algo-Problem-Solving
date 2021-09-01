#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    long long cnd_d, day[2] = {0, 0};
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        day[i%2] += a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cnd_d = a[i];
        day[i % 2] -= cnd_d;
        if(day[0] == day[1])
            ans++;
        day[(i%2)^1] += cnd_d;
    }
    cout << ans << endl;

    return 0;
}