#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n; cin >> n;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].ff;
        v[i].ss = i+1;
    }
    sort(v.begin(), v.end());
    bool ok = true;
    for(int i = 3; i < n; i++)
        ok &= ((v[i].ff-v[i-1].ff) == (v[2].ff-v[1].ff));
    if(ok)
        return !(cout << v[0].ss << endl);
    ok = true;
    for(int i = 3; i < n; i++)
        ok &= ((v[i].ff-v[i-1].ff) == (v[2].ff-v[0].ff));
    if(ok)
        return !(cout << v[1].ss << endl);
    int d = v[1].ff-v[0].ff, ans = -1;
    for(int i = 2; i < n; i++)
    {
        if(v[i].ff-v[i-1].ff != d and ans != -1)
            return !(cout << -1 << endl);

        if(v[i].ff-v[i-1].ff != d)
        {
            if(i+1 == n or v[i+1].ff-v[i-1].ff == d)
            {
                ans = v[i].ss;
                i++;
            }
            else return !(cout << -1 << endl);
        }
    }
    cout << ans << endl;
    return 0;
}