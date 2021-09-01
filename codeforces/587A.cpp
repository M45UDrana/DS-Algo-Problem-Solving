#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+2;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> v(N, 0);
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        v[x]++;
    }
    int ans = 0, ad;
    for(int i = 1; i < N; i++)
    {
        v[i] += v[i-1] / 2;
        v[i-1] -= (int(v[i-1]/2) * 2);
        ans += v[i-1];
        if(i == N-1)
            ad = v[i];
    }
    while(ad)
    {
        if(ad%2)
            ans++;
        ad = (int)ad/2;
    }
    cout << ans << endl;
    return 0;
}