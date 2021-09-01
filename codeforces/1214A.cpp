#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, d, e, ans, temp;
    cin >> n >> d >> e;
    ans = n;
    e *= 5;
    int a = (n / e) + 1;
    for(int i = 0; i <= a;i++)
    {
        if(i * e <= n)
        {
            temp = n - (i * e);
            temp = ((temp / d ) * d) + (i * e);
        }
        else
            temp = (n / d) * d;
        if(temp <= n)
            ans = min(ans, n - temp);
    }

    cout << ans << endl;

    return 0;
}