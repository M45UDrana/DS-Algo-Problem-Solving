#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n, m; cin >> n >> m;
    vector<pair<int,pair<int,int> > > v(m);
    for(int i = 0; i < m; i++)
    {
        cin >> v[i].ff >> v[i].ss.ff;
        v[i].ss.ff *= -1; v[i].ss.ss = i;
    }
    sort(v.begin(),v.end());
    vector<pair<int,int> > ans(m);

    int mst = 1, l = 1, r = 3;
    for(int i = 0; i < m; i++)
    {
        if(v[i].ss.ff)
        {
            ans[v[i].ss.ss] = make_pair(mst, mst+1);
            mst++;
        }
        else
        {
            if(r > mst)
                return !(cout << -1 << endl);
            ans[v[i].ss.ss] = make_pair(l, r);
            l++;
            if(l+1 == r)
            {
                r++;
                l = 1;
            }
        }
    }
    for(int i = 0; i < m; i++)
        cout << ans[i].ff << " " << ans[i].ss << endl;
    return 0;
}