#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x = max(a[0],a[n-1]);
    sort(a, a+n);
    if(k == 1)
        cout << a[0] << endl;
    else if(k == 2)
        cout << x << endl;
    else cout << a[n-1] << endl;
    return 0;
}