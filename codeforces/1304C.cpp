#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int q; cin >> q;
    while(q--)
    {
        int n, m; cin >> n >> m;
        int t[n], l[n], r[n];
        for(int i = 0; i < n; i++)
            cin >> t[i] >> l[i] >> r[i];
        int mn = m, mx = m, k = t[0];
        bool flg = true;
        for(int i = 0; i < n; i++)
        {
            if(i != 0)
                k = t[i] - t[i-1];
            if(mn-k <= r[i] and l[i] <= mx+k)
            {
                mn = max(mn-k, l[i]);
                mx = min(mx+k, r[i]);
            }
            else 
            {
                flg = false;
                break;
            }
        }
        if(flg)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}