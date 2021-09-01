#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long n, m, q; 
    cin >> n >> m >> q;
    long long g = __gcd(n, m);
    n /= g; m /= g;
    while(q--)
    {
        long long a, b, c, d; cin >> a >> b;
        if(a == 1)
            c = (b+n-1)/n;
        else c = (b+m-1)/m;
        cin >> a >> b;
        if(a == 1)
            d = (b+n-1)/n;
        else d = (b+m-1)/m;
        if(c == d)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}