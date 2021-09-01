#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    k = (int)1e6 - k;
    vector<pair<double,int>> v;
    for(int i = 0; i < n; i++)
    {
        double x, y;
        int p;
        cin >> x >> y >> p;
        double d = sqrt(x*x+y*y);
        v.push_back(make_pair(d,p));
    }
    sort(v.begin(),v.end());
    cout <<setprecision(20);
    for(int i = 0; i < n; i++)
    {
        k -= v[i].second;
        if(k <= 0)
            return !(cout << v[i].first << endl);
    }
    cout << -1 << endl;
    return 0;
}