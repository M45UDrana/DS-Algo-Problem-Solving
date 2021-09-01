#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        ll x, y; cin >> n >> x >> y;
        string s; cin >> s;
        ll dn, clu, up, cld;
        dn = x+y;
        clu = (x*2)+(y*2);
        up = x+(y*2);
        cld = (x*2)+y;
        ll a[n-1][2] = {0};
        if(s[1] == '1')
            a[0][1] = clu;
        else a[0][0] = dn;
        for(int i = 1; i < n-1; i++)
        {
            if(s[i] == '0' && s[i+1] == '0')
            {
                ll dn1 = -1;
                if(a[i-1][0])
                    a[i][0] = a[i-1][0]+dn;
                else
                    a[i][0] = a[i-1][1]+cld;
                if(a[i-1][1])
                    a[i][1] = a[i-1][1]+up;
            }
            else 
            {
                ll up1 = -1;
                if(a[i-1][0])
                    a[i][1] = a[i-1][0]+clu;
                if(a[i-1][1] && a[i][1])
                    a[i][1] = min(a[i][1], a[i-1][1] + up);
                else if(a[i-1][1])
                    a[i][1] = a[i-1][1] + up;
            }
        }
        ll ans = max(a[n-1][0], a[n-1][1]);
        if(a[n-2][0])
        {
            a[n-2][0] += dn;
            ans = min(ans, a[n-2][0]);
        }
        if(a[n-2][1])
        {
            a[n-2][1] += cld;
            ans = min(ans, a[n-2][1]);
        }
        cout << ans + y << endl;
    }
    return 0;
}