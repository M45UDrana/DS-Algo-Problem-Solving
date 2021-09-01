#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, l, r; 
    cin >> n >> p >> l >> r;
    int ans = 0;
    if(l > 1 and r < n)
    {
        ans = min(abs(l-p)+abs(r-l), abs(r-p)+abs(l-r))+2;
    }
    else if(l > 1)
    {
        ans = abs(l-p)+1;
    }
    else if(r < n)
    {
        ans = abs(r-p)+1;
    }
    cout << ans << endl;
    return 0;
}