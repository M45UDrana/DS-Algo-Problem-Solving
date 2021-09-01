#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    double a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    long double ans = 0, wek = 0;
    for(int i = 0; i < k; i++)
        wek += a[i];
    ans += wek;
    for(int i = k; i < n; i++)
    {
        wek += a[i];
        wek -= a[i-k];
        ans += wek;
    }
    cout << setprecision(30)<< ans / (long double)(n-k+1) << endl;
    return 0;
}