#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[101];
    memset(a, 0, sizeof(a));
    for(int i = 0, x; i < n; i++)
    {
        cin >> x; a[x]++;
    }
    int ple[101];
    memset(ple, 0, sizeof(ple));
    for(int i = 0; i <= 100; i++)
    {
        int x = a[i];
        for(int j = 0; j <= 100; j++)
        {
            int y = min(i+1 - ple[j], x);
            ple[j] += y;
            x -= y;
        }
    }
    int ans = 0;
    for(int i = 0; i <= 100; i++)
        ans += (ple[i] > 0);
    cout << ans << endl;
    return 0;
}