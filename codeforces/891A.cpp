#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n], cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            cnt++;
    }
    if(cnt)
        return !(cout << n - cnt << endl);
    int ans = 3*n;
    for(int i = 0; i < n; i++)
    {
        int Gcd = a[i];
        for(int j = i+1; j < n; j++)
        {
            Gcd = __gcd(Gcd, a[j]);
            if(Gcd == 1)
            {
                ans = min(ans, (j-i)+(n-1));
                break;
            }
        }
    }
    if(ans == 3*n)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}