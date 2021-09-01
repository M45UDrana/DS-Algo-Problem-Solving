#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n+1);
    v[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i-1];
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        int it = lower_bound(v.begin(),v.end(),x)
            - v.begin();
        cout << it << endl;
    }
    return 0;
}