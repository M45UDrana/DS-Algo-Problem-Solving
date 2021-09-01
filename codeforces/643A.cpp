#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n;
    int ans[n+1], a[n];
    memset(ans, 0, sizeof(ans));
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        int occur[n+1];
        memset(occur, 0, sizeof(occur));
        int cur = 0;
        for(int j = i, x; j < n; j++)
        {
            x = a[j];
            occur[x]++;
            if(occur[cur] < occur[x])
                cur = x;
            else if(occur[cur] == occur[x] and x < cur)
                cur = x;
            ans[cur]++;
        }
    }
    for(int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}