#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int b[n+2] = {0}, c[n+2] = {0}, mx = 0, mn = 0;
    for(int i = 0; i < n; i++)
    {
        if(!b[a[i]-1])
        {
            b[a[i]-1] = 1;
            mx++;
        }
        else if(!b[a[i]])
        {
            b[a[i]] = 1;
            mx++;
        }
        else if(!b[a[i]+1])
        {
            b[a[i]+1] = 1;
            mx++;
        }

        if(c[a[i]-1] == 0 && c[a[i]] == 0 && c[a[i]+1] == 0)
        {
            c[a[i]+1] = 1;
            mn++;
        }
    }
    cout << mn << " " << mx << endl;
    
    return 0;
}