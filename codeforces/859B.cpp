#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
    int n; cin >> n;
    int ans = oo;
    int sq = sqrt(n)+1;
    for(int i = sq; i > 0; i--)
    {
        int j = (n+i-1)/i;
        ans = min(2*(i+j), ans);
    }
    cout << ans << endl;
    return 0;
}