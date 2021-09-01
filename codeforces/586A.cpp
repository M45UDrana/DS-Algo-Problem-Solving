#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i])
            ans++;
        else if(i > 0 and i < n-1 and a[i-1] == 1 and a[i+1] == 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}