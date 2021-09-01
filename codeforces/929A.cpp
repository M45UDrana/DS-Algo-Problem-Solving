#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int ans = 0,mxr = k, pre;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(i)
        {
            if(x-pre > mxr)
            {
                ans++;
                mxr = k;
            }
            if(x-pre > mxr)
                return !(cout << -1 << endl);
            mxr -= x-pre;
            pre = x;
        }
        else pre = x;
    }
    cout << ans+1 << endl;
    return 0;
}