#include <bits/stdc++.h>

using namespace std;

const int m = 1e4+7;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    int i = 0, j = n-1;
    int ans = 0;
    while(i < n and j >= 0)
    {
        ans = (ans + (a[i]%m * a[j]%m)%m)%m;
        i++; j--;
    }
    cout << ans << endl;
    return 0;
}