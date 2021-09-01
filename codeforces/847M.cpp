#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int av = a[1] - a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i-1] != av)
        {
            cout << a[n-1] << endl;
            return 0;
        }
    }
    cout << a[n-1] + av << endl;
    return 0;
}