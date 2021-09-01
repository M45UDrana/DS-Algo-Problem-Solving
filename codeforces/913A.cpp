#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    if(n > 30)
        cout << m << endl;
    else
    {
        n = pow(2, n);
        cout << (int)m%n << endl;
    }
    return 0;
}