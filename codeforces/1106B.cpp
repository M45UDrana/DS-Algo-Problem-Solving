#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);
#define PII pair<int, int>
#define int long long

int32_t main()
{
    IO
    int n, m, ans = 0;
    cin >> n >> m;

    int a[n], c[n];
    int t[m], d[m];
    priority_queue <PII, vector<PII>, greater<PII>> cost;
    pair<int, int> chp;

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
        cost.push(make_pair(c[i], i));
    }
    for(int i = 0; i < m; i++)
        cin >> t[i] >> d[i];

    for(int knd = 0, srv_dis; knd < m; knd++, ans = 0)
    {
        srv_dis = min(a[t[knd]-1], d[knd]);
        ans += srv_dis * c[t[knd]-1];
        a[t[knd]-1] -= srv_dis;
        d[knd] -= srv_dis;

        if(d[knd] > 0)
        {
            while(!cost.empty())
            {
                chp = cost.top();
                srv_dis = min(a[chp.second], d[knd]);
                ans += srv_dis * c[chp.second];
                a[chp.second] -= srv_dis;
                d[knd] -= srv_dis;
                if(d[knd] == 0)
                    break;
                cost.pop();
            }
            if(d[knd] != 0) ans = 0;
        }
        cout << ans << endl;
    }

    return 0;
}