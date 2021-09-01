#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++)
    {
        v[i].first = a[i]-b[i];
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    int i = 0;
    long long ans = 0;
    while((i < n) and (i < k or v[i].first < 0))
    {
        ans += a[v[i].second];
        i++;
    }
    while(i < n)
    {
        ans += b[v[i].second];
        i++;
    }
    cout << ans << endl;
    return 0;
}