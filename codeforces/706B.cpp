#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int main()
{
    int n; cin >> n;
    int a[N];
    memset(a, 0, sizeof(a));
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for(int i = 1; i < N; i++)
        a[i] += a[i-1];
    int m; cin >> m;
    for(int i = 0, x; i < m; i++)
    {
        cin >> x;
        x = min(x, N-2);
        cout << a[x] << endl;
    }
    return 0;
}