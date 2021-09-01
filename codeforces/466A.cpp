#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b; cin >> n >> m >> a >> b;
    int sum = 0;
    while(n > 0)
    {
        int x = min(m, n);
        sum += min(a*x, b);
        n -= x;
    }
    cout << sum << endl;
    return 0;
}