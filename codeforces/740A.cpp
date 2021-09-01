#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    n = (4 - (n%4))%4;
    if(!n)
        cout << 0 << endl;
    else if(n == 1)
        cout << min({a, b+c, c*3}) << endl;
    else if(n == 2)
        cout << min({a*2, b, c*2}) << endl;
    else cout << min({a*3, a+b, c}) << endl;
    return 0;
}