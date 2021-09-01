#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int ans;
    for(int i = 0, x; i < n; i++)
    {
        int s, d; cin >> s >> d;
        if(i)
        {
            x = (max(0,(ans - s)) + (d-1))/d;
            if(s + (x*d) == ans)
                ans = s + ((x+1) * d);
            else ans = s + (x*d);
        }
        else ans = s;
    }
    cout << ans << endl;
    return 0;
}