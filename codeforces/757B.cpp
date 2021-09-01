#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int res[N];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        for(int i = 1; i*i <= x; i++)
        {
            if(x%i)
                continue;
            res[i]++;
            if(i*i != x)
                res[x/i]++;
        }
    }
    int ans = 1;
    for(int i = 2; i < N; i++)
        ans = max(ans, res[i]);
    cout << ans << endl;
    return 0;
}