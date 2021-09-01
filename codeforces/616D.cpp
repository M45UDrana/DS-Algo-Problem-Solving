#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+3;
int val[N];

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, cnt = 0;
    pair<int,int> ans = {0,0};
    for(int r = 0; r < n; r++)
    {
        val[a[r]]++;
        if(val[a[r]] == 1)
            cnt++;
        while(cnt > k and l < r)
        {
            val[a[l]]--;
            if(!val[a[l]])
                cnt--;
            l++;
        }
        if(ans.second+1-ans.first < r+1-l)
            ans = make_pair(l, r);
    }
    cout << ans.first+1<< " " << ans.second+1<< endl;
    return 0;
}