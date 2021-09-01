#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> pty(n+1), gna(n+1);
    pty[0] = 0; gna[0] = 0;
    for(int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if(x%2)
        {
            pty[i] = pty[i-1]+1;
            gna[i] = gna[i-1];
        }
        else
        {
            gna[i] = gna[i-1]+1;
            pty[i] = pty[i-1];
        }
    }
    vector<pair<int,int> > ans;
    for(int t = 1; t <= n; t++)
    {
        int sp = 0, sg = 0, xp = 0, xg = 0;
        while(1)
        {
            int in = min(lower_bound(pty.begin(),pty.end(),xp+t)-pty.begin(),
                    lower_bound(gna.begin(),gna.end(),xg+t)-gna.begin());
            if(in != n+1)
            {
                if(xp+t == pty[in])
                {
                    sp++;
                    if(n == in and sp > sg)
                    {
                        ans.push_back(make_pair(sp,t));
                        break;
                    }
                }
                else
                {
                    sg++;
                    if(n == in and sg > sp)
                    {
                        ans.push_back(make_pair(sg, t));
                        break;
                    }
                }
                xp = pty[in];
                xg = gna[in];
            }
            else break;
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;
    return 0;
}