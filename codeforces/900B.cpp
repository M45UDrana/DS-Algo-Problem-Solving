#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c; cin >> a >> b >> c;
    for(int i = 1; i <= (int)1e6; i++)
    {
        a %= b;
        a *= 10;
        if((int)a/b == c)
            return !(cout << i << endl);
    }
    cout << -1 << endl;
    return 0;
}