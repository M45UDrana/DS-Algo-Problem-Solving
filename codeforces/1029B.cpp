#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x=1, ans = 1;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i] * 2 >= a[i+1])
            x++;
        else
        {
            ans = max(ans, x);
            x = 1;
        }
    }
    ans = max(ans, x);
    cout << ans << endl;

    return 0;
}