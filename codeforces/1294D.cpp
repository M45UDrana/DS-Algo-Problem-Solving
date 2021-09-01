#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q, x; cin >> q >> x;
    int a[x] = {0};
    int ans = 0;
    for(int i = 0, n; i < q; i++)
    {
        cin >> n;
        a[n%x]++;
        while(a[ans%x] > (int)ans/x)
            ans++;
        cout << ans << '\n';
    }
    return 0;
}