#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, wht, blk; cin >> n >> wht >> blk;
    int clr[2] = {wht, blk};
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = n-1;
    int ans = 0;
    bool ok = true;
    while(i <= j)
    {
        if(i == j and a[i] == 2)
            ans += min(wht, blk);
        else if(a[i] == a[j] and a[i] == 2)
            ans += 2*min(wht, blk);
        else if(a[i] != a[j])
        {
            if(a[i] == 2 or a[j] == 2)
                ans += clr[min(a[i], a[j])];
            else ok = false;
        }
        i++; j--;
    }
    if(ok)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}