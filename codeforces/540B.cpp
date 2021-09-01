#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, p, x, y, sum = 0;
    cin >> n >> k >> p >> x >> y;
    vector<int> v(k), ans;
    int low = 0, hi = 0;
    bool ok = false;
    for(int i = 0; i < k; i++)
    {
        cin >> v[i];
        sum += v[i];
        if(v[i] < y)
            low++;
        else 
            hi++;
        if(p < v[i])
            ok = true;
    }
    while(hi < (n+1)/2)
    {
        hi++;
        ans.push_back(y);
        sum += y;
        if(p < y)
            ok = true;
    }
    while(low < n-hi)
    {
        low++;
        ans.push_back(1);
        sum += 1;
    }
    if((low+hi) != n or sum > x or ok)
        return !(cout << -1 << endl);
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}