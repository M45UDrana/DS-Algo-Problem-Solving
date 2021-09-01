#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+7;

int main()
{
    int n; cin >> n;
    int a[n], b[n], c[n];
    for(int i = 1; i < n; i++)cin>>a[i];
    for(int i = 1; i < n; i++)cin>>b[i];
    for(int i = 0; i < n; i++)cin>>c[i];

    for(int i = 0;  i < n; i++)
    {
        int j = 1;
        while(j <= i)
            c[i] += a[j++];
        while(j < n)
            c[i] += b[j++];
    }
    sort(c, c+n);
    cout << c[0]+c[1] << endl;

    return 0;
}