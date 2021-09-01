#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, ans = 0;
    cin >> n;
    int ar[n];
    pair <int, int> maxs, mins;
    maxs.first = 0;
    mins.first = 101;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] > maxs.first)
        {
            maxs.first = ar[i];
            maxs.second = i;
        }
        if(ar[i] <= mins.first)
        {
            mins.first = ar[i];
            mins.second = i;
        }
    }
    ans += maxs.second;
    ans += (n - mins.second - 1);
    if(mins.second < maxs.second)
        ans--;
    cout << ans << endl;
    return 0;
}