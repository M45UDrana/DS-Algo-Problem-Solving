#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(!x)
            cnt++;
    }
    if((cnt == 1 and n > 1) or (cnt == 0 and n == 1))
        cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}