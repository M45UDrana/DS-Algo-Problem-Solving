#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int mn = 0, mx = 0;
    if(n > k and k != 0)
        mn++;
    mx = min(n-k, k*2);
    cout << mn << " " << mx << endl;
    return 0;
}