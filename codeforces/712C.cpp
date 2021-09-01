#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ans = 0; cin >> n >> m;
    if(n < m)
        swap(n,m);
    int a[3] = {m,m,m};
    while(1)
    {   
        if(a[0] >= n and a[1] >= n and a[2] >= n)
            break;
        sort(a,a+3);
        a[0] = (a[1]+a[2])-1;
        ans++;
        if(a[0] >= n and a[1] >= n and a[2] >= n)
            break;
        sort(a,a+3);
        a[0] = (a[1]+a[2])-1;
        ans++;
        if(a[0] >= n and a[1] >= n and a[2] >= n)
            break; 
        sort(a,a+3);
        a[0] = (a[1]+a[2])-1;
        ans++;
    }
    cout << ans << endl;
    return 0;
}