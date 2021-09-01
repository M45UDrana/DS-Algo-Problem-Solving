#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int minx, maxx, miny, maxy;
    cin >> minx >> miny;
    maxx = minx; maxy = miny;
    
    for(int i = 1; i < n; i++)
    {
        int a, b; cin >> a >> b;
        minx = min(a, minx);
        maxx = max(a, maxx);
        miny = min(b, miny);
        maxy = max(b, maxy);
    }
    long long l = max(abs(maxx - minx), 1);
    long long h = max(abs(maxy - miny), 1);
    cout << max(l, h) * max(l, h) << endl;
    return 0;
}