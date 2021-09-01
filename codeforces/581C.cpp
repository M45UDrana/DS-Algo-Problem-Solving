#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    vector<int> in[10];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        int x = a[i]%10;
        if(x)
            in[10-x].push_back(i);
    }
    for(int i = 1; i < 10 and k >= i; i++)
    {
        for(int j = 0; j < in[i].size() and k >= i; j++)
        {
            a[in[i][j]] += i;
            k -= i;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x = min(100-a[i], k);
        a[i] += x;
        k -= x;
        ans += a[i]/10;
    }
    cout << ans << endl;
    return 0;
}