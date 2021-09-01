#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int,int> > b(n);
    for(int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());
    int ans[n];
    for(int i = 0; i < n; i++)
    {
        ans[b[i].second] = a[i];
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}