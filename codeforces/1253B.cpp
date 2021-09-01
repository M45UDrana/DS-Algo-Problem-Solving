#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+2;

int main()
{
    int n; cin >> n;
    vector<int> day(N, 0), cmp, res;
    int cnt = 0, ans = 0, cur = -1, sum = 0;
    bool ok = true;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(x > 0)
        {
            cnt++;
            if(!day[x])
                day[x] = 1;
            else ok = false;
        }
        else 
        {
            cnt--;
            x *= -1;
            if(day[x] == 1)
            {
                day[x] = -1;
                cmp.push_back(x);
            }
            else ok = false;
            if(cnt == 0)
            {
                ans++;
                for(int j = 0; j < cmp.size(); j++)
                    day[cmp[j]] = 0;
                cmp.clear();
                res.push_back(i - cur);
                sum += (i - cur);
                cur = i;
            }
        }
    }
    if(ok and sum == n)
    {
        cout << ans << endl;
        for(int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    else cout << -1 << endl;
    return 0;
}