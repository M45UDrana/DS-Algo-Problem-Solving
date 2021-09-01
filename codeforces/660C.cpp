#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int zro = 0, one = 0, ans = 0;
    int st, end;
    for(int lft = 0, rht = 0; rht < n; rht++)
    {
        if(a[rht] == 1)
            one++;
        else zro++;
        while(zro > k)
        {
            if(a[lft] == 1)
                one--;
            else zro--;
            lft++;
        }
        if(ans < rht+1-lft)
        {
            ans = rht+1-lft;
            st = lft; end = rht;
        }
    }
    cout << ans << endl;
    for(int i = 0; i < n; i++)
    {
        if(st <= i and i <= end)
            cout << 1 << " ";
        else cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}