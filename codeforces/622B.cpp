#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, m;
    char z; cin >> h >> z >> m;
    int n; cin >> n;
    n += m;
    h = (h+(n/60))%24;
    n -= (n/60) * 60;
    m = n;
    if(h < 10)
        cout << 0 << h << z;
    else cout << h << z;
    if(m < 10)
        cout << 0 << m << endl;
    else cout << m << endl;
    return 0;
}