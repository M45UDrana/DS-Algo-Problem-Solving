#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    if(n == 1)
        cout << 0 << endl;
    else if(min({a,b,c}) == a)
        cout << a * (n-1) << endl;
    else if(min({a,b,c}) == b)
        cout << b * (n-1) << endl;
    else
        cout << (c * (n-2) ) + min(a, b) << endl;
    return 0;
}