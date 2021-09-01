#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        ll cnt = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j])
                cnt++;
        }
        sum += (1ll << cnt)-1;
        cnt = m-cnt;
        sum += (1ll << cnt)-1;
    }
    for(int j = 0; j < m; j++)
    {
        ll cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i][j])
                cnt++;
        }
        sum += (1ll << cnt)-(cnt+1);
        cnt = n-cnt;
        sum += (1ll << cnt)-(cnt+1);
    }
    cout << sum << endl;
    return 0;
}