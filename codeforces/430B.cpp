#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n, k, x; cin >> n >> k >> x;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector<pair<int,int> >v;
    int cnt = 1, y = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] == y)
            cnt++;
        else
        {
            v.push_back(make_pair(y, cnt));
            cnt = 1;
            y = a[i];
        }
    }
    v.push_back(make_pair(y, cnt));
    int m = v.size(), ans = 0;
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        if(v[i].ff == x and v[i].ss == 2)
        {
            sum = 2;
            int l = i-1, r = i+1;
            while(l >= 0 and r < m)
            {
                if(v[l].ss+v[r].ss > 2 and v[l].ff == v[r].ff)
                    sum += v[l].ss+v[r].ss;
                else break;
                l--; r++;
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}