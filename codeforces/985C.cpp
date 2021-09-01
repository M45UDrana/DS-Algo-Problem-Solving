#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> v(n*k);
    for(int i = 0; i < n*k; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int r = 0;
    for(; r < n*k; r++)
        if(v[r]-v[0] > l)
            break;
    int i = 0;
    long long ans = 0;
    while(n)
    {
        if(r-n < 0)
            break;
        ans += v[i];
        n--;
        i = min(i+k, r-n);
    }
    cout << ans << endl;
    return 0;
}