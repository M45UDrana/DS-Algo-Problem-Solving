#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x; cin >> n >> x;
        int a[n];
        int ans = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == x)
                ans = 1;
            mx = max(mx, a[i]);
        }
        if(ans == 1)
            cout << ans << endl;
        else
        {
            ans = (x+mx-1)/mx;
            cout << max(ans, 2) << endl;
        }
    }
    return 0;
}