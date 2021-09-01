#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int a[n], ans = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m = pow(2, n);
    vector<int>v;
    for(int i = 1; i < m; i++)
    {
        int j = 0;
        while(j < n)
        {
            if(i & (1<<j))
            {
                v.push_back(a[j]);
            }
            j++;
        }
        int sum = 0;
        sort(v.begin(), v.end());
        for(int k = 0; k < v.size(); k++)
            sum += v[k];
        if(v.size() >= 2 and l <= sum and sum <= r and (v[(int)v.size()-1] - v[0]) >= x)
            ans++;
        v.clear();
    }
    cout << ans << endl;
    return 0;
}