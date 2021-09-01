#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    if(t == 10 and n == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    if(t == 10)
        cout << 1;
    else
        cout << t;
    n--;
    while(n--)
        cout << 0;
    cout << endl;
    return 0;
}