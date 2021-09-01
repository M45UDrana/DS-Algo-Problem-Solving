#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q; cin >> n >> q;
    int a[n+1];
    memset(a, 0, sizeof(a));
    while(q--)
    {
        int t, k, d, cnt = 0; 
        cin >> t >> k >> d;
        for(int i = 1; i <= n; i++)
            cnt += (a[i] < t);
        if(cnt >= k)
        {
            int sum = 0;
            for(int i = 1; i <= n and k; i++)
            {
                if(a[i] < t)
                {
                    a[i] = t+d-1;
                    k--;
                    sum += i;
                }
            }
            cout << sum << '\n';
        }
        else cout << -1 << '\n';
    }
    return 0;
}