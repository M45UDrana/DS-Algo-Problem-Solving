#include <bits/stdc++.h>

using namespace std;

int triZ(int n)
{
    int sum = 0, d = 5;
    while(d <= n)
    {
        sum += n/d;
        d *= 5;
    }
    return sum;
}

int main()
{
    int m; cin >> m;
    int lft = 1, rht = 1e6;
    while(lft < rht)
    {
        int mid = lft + (rht+1-lft)/2;
        if(triZ(mid) <= m)
            lft = mid;
        else rht = mid-1;
    }
    vector<int> ans;
    while(triZ(lft) == m)
    {
        ans.push_back(lft);
        lft--;
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i+1 == ans.size()];

    return 0;
}