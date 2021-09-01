#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double l; cin >> n >> l;
    vector<double> dis;
    double a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    for(int i = 1; i < n; i++)
        dis.push_back((a[i]-a[i-1])/2.0);
    dis.push_back((a[0]-0));
    dis.push_back((l-a[n-1]));
    double ans = 0;
    for(int i = 0; i < dis.size(); i++)
        ans = max(ans, dis[i]);
    cout << setprecision(12);
    cout << ans << endl;
    return 0;
}