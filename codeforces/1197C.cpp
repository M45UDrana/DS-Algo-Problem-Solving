#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(n == k)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<pair<int, int>>dif, ind;
    for(int i = 1; i < n; i++)
    {
        dif.push_back(make_pair(a[i] - a[i-1], i-1));
        ind.push_back(make_pair(i-1, i));
    }
    sort(dif.begin(), dif.end(), greater<pair<int,int>>());
    vector<int>in;
    in.push_back(0);
    for(int i = 0; i < k-1; i++)
    {
        in.push_back(ind[dif[i].second].first);
        in.push_back(ind[dif[i].second].second);
    }
    in.push_back(n-1);
    sort(in.begin(), in.end());
    long long ans = 0;
    n = in.size();
    for(int i = 0; i < n; i+=2)
    {
        ans += a[in[i+1]] - a[in[i]];
    }
    cout << ans << endl;
    return 0;
}