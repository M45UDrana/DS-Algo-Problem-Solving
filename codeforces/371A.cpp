#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[k], c[k];
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
            b[i%k]++;
        else c[i%k]++;
    }
    int ans = 0;
    for(int i = 0; i < k; i++)
    {
       // cout << b[i] << " " << c[i] << endl;
        ans += min(b[i], c[i]);
    }
    cout << ans << endl;
    
    return 0;
}