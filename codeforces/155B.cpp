#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        v.push_back(make_pair(b, a));
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    int m = v[0].first, pnt = v[0].second;
    for(int i = 1; m > 0 && i < n; i++)
    {
        pnt += v[i].second;
        m += v[i].first-1;
    }
    cout << pnt << endl;
    return 0;
}