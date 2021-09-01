#include <bits/stdc++.h>

using namespace std;
const int N = 3e5+7;

int a[N], idx[N];
vector<pair<int,int> > ans;

void swp(int l, int r)
{
    ans.push_back(make_pair(l,r));
    swap(idx[a[l]], idx[a[r]]);
    swap(a[l], a[r]);
}

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        idx[a[i]] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        int x = i;
        if(idx[x] == x)
            continue;

        while(idx[x] != x)
        {
            if(abs(idx[x]-x)*2 < n)
            {
                if(abs(1-idx[x])*2 >= n)
                    swp(1, idx[x]);
                else swp(n, idx[x]);
            }
            else
                swp(idx[x], x);
        }
        if(idx[1] != 1)
            swp(1, idx[1]);
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second 
            << endl;
    return 0;
}