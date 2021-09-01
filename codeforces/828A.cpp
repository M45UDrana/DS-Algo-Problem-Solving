#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t1, t2, t3 = 0; cin >> n >> t1 >> t2;
    int a[n];
    int cnt1 = 0, cnt2 = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 1)
            cnt1++;
        else cnt2++;
        if(cnt1)
        {
            if(t1)
            {
                t1--;
                cnt1--;
            }
            else if(t2)
            {
                t2--;
                t3++;
                cnt1--;
            }
            else if(t3)
            {
                t3--;
                cnt1--;
            }
            else
            {
                ans++;
                cnt1--;
            }
        }
        if(cnt2)
        {
            if(t2)
            {
                t2--;
                cnt2--;
            }
            else
            {
                ans += 2;
                cnt2--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}