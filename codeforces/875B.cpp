#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int used[n+1];
    memset(used, 0, sizeof(used));
    int lft = 0, rht = n;
    for(int i = 0; i < n; i++)
    {
        cout << i+1 - (n-rht) << " ";
        used[a[i]] = true;
        while(used[rht]) rht--;
    }
    cout << 1 << endl;
    return 0;
}