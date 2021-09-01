#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n; 
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int mx = 0;
        for(int i = 0, x; i < n; i++)
        {
            cin >> x;
            a[i] = x - a[i];
            mx = max(a[i], mx);
        }
        int i = 0;
        while(i < n and a[i] == 0)
            i++;
        while(i < n and a[i] == mx)
            i++;
        while(i < n and a[i] == 0)
            i++;
        if(i == n)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}