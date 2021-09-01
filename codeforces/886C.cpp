#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1], cnt = 1;
    a[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        int t; cin >> t;
        if(a[t])
        {
            a[i] = a[t];
            a[t] = 0;
        }
        else
            a[i] = ++cnt;
    }
    cout << cnt << endl;
    return 0;
}