#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, d; cin >> n >> d;
        int a[n];
        int ans;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i == 0)
                ans = a[i];
            else
            {
                ans += min(a[i], d/i);
                d -= (min(a[i], d/i)*i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}