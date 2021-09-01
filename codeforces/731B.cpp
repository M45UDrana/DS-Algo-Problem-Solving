#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n-1; i++)
    {
        a[i] %= 2;
        if(a[i] == 1)
        {
            a[i]--;
            a[i+1]--;
        }
        if(a[i] < 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    a[n-1] %= 2;
    if(a[n-1] < 0 or a[n-1] == 1)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}