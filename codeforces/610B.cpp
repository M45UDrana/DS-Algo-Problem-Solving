#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int mn = a[0];
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            a[i] = min(min(a[n-1],a[i+1])+1, a[i]);
        else if(i == n-1)
            a[i] = min(min(a[i-1],a[0])+1, a[i]);
        else 
            a[i] = min(min(a[i-1], a[i+1])+1, a[i]);
        mn = min(mn, a[i]);
    }
    int c = 0;
    for(int i = 0, cnt = 0; i < n*2; i++)
    {
        if(a[i%n] > mn)
            cnt++;
        else cnt = 0;
        c = max(c, cnt);
    }
    cout << (c*(mn+1))+(n-c)*mn << endl;
    return 0;
}