#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    double n, w; cin >> n >> w;
    vector<double> v;
    for(double i = 0, x; i < 2*n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<double>());
    double grl = w / (n*2+n);
    double boy = grl * 2;
    for(double i = 0; i < n; i++)
    {
        boy = min(boy, v[i]);
        grl = min(grl, v[i+n]);
    }
    double ans = min(grl, boy/2);
    printf("%lf\n", ans*(n*2+n));
    return 0;
}