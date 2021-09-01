#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    vector<pair<int,int> > rw(n+1, {0,0}), clm(m+1, {0,0});
    for(int i = 1; i <= k; i++)
    {
        int rc, in, cl; cin >> rc >> in >> cl;
        if(rc == 1)
            rw[in] = make_pair(i,cl);
        else clm[in] = make_pair(i,cl);
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(rw[i].first > clm[j].first)
                cout << rw[i].second << " ";
            else cout << clm[j].second << " ";
        }
        cout << endl;
    }
    return 0;
}