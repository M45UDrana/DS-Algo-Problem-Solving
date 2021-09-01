#include <iostream>

using namespace std;
typedef unsigned long long ull;

int main()
{
    ull n, ans = 0, xr; cin >> n;
    ull a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            xr = a[i];
            for(int k = i; k < j; k++)
            {
                if(k == i)
                    xr = a[k];
                else 
                    xr ^= a[k];
            }
            ans = max(ans, xr);
        }
    }
    cout << ans << endl;
    return 0;
}