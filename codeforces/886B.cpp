#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+1;
int main()
{
    int a[N];
    memset(a, 0, sizeof(a));
    int n; cin >> n;
    int ans = -1;
    for(int i = 1, x; i <= n; i++)
    {
        cin >> x;
        a[x] = i;
    }
    int time = n+1;
    for(int i = 0; i < N; i++)
        if(a[i] != 0 and a[i] <= time)
        {
            ans = i;
            time = a[i];
        }
    cout << ans << endl;
    return 0;
}