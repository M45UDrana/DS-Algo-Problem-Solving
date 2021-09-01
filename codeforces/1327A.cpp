#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        bool ok = true;
        if(n%2 != k%2)
            ok = false;
        k = k*k;
        if(n < k)
            ok = false;
        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}