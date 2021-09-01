#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<long double, int> mp;
    int n; cin >> n;
    long double a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, c = 0;
    for(int i = 0; i < n; i++)
    {
        long double x;
        cin >> x;
        if(!x and !a[i])
            c++;
        else if(!x)
            mp[0.0]++;
        else if(a[i])
            mp[x/a[i]]++;
    }
    for(auto &x : mp)
        ans = max(ans, x.second);
    cout << ans+c << endl;
    return 0;
}