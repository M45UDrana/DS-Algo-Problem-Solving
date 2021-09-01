#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long mn = sum / n, mx = (sum+n-1)/n, lw = 0, hgh = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < mn)
            lw += mn - a[i];
        else if(a[i] > mx)
            hgh += a[i] - mx;
    }
    cout << max(lw, hgh) << endl;
    return 0;
}