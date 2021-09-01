#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, m, cnt = 0, a, b;
    cin >> n >> m;
    int minn = min(n, m);
    for(int i = 0; i <= minn; i++)
    {
        for(int j = 0; j <= minn; j++)
        {
            a = (i*i + j);
            b = (i + j*j);
            if(a == n && b == m)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}