#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int hi = 0, low = 0;
    (a > x) ? hi += (a - x)/2 : (low += x - a);
    (b > y) ? hi += (b - y)/2 : (low += y - b);
    (c > z) ? hi += (c - z)/2 : (low += z - c);
    if(hi >= low)
        cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}