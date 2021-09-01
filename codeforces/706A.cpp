#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, ans = 1e5; cin >> a >> b;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        double x, y, s; cin >> x >> y >> s;
        double v = sqrt((x-a)*(x-a) + (y-b)*(y-b))/s;
        ans = min(ans, v);
    }
    cout <<setprecision(20)<< ans<<endl;
    return 0;
}