#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int mn = n+1, m = n;
    for(int i = 2; i < n; i++)
    {
        int d = (n+i-1)/i;
        if(d+i < mn)
        {
            mn = d+i;
            m = i;
        }
    }
    int l = 0, r = m, k = 1;
    bool ok = true;
    while(ok)
    {
        r = min(m*k, n);
        for(int i = r; i > l; i--)
            cout << i << " ";
        l = r;
        k++;
        if(r == n)
            ok = false;
    }
    cout << endl;
    return 0;
}