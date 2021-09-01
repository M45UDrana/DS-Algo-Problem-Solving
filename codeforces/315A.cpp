#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[1001], b[1001];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i = 0, u, v; i < n; i++)
    {
        cin >> u >> v;
        a[u]++;
        if(u != v)
            b[v]++;
    }
    int cnt = 0;
    for(int i = 1; i <= 1000; i++)
    {
        if(a[i] and !b[i])
            cnt += a[i];
    }
    cout << cnt << endl;
    return 0;
}