#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int m; cin >> m;
    int b[m];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    int idx = 0, la = 0, lb = 0;
    ll sma = a[0], smb = b[0];
    while(la < n and lb < m)
    {
        if(sma == smb)
        {
            idx++; la++; lb++;
            sma = 0; smb = 0;
            if(la < n and lb < m)
            {
                sma = a[la]; 
                smb = b[lb];
            }
            else break;
        }
        else if(sma > smb)
        {
            lb++;
            if(lb < m)
                smb += b[lb];
            else break;
        }
        else
        {
            la++;
           if(la < n)
               sma += a[la];
           else break;
        }
    }
    if(la == n and lb == m and sma == 0)
        cout << idx << endl;
    else cout << -1 << endl;

    return 0;
}