#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int x, y; cin >> x >> y;
    int cur = 0, ans = 0;
    for(int i = 0, x1, y1; i < n; i++)
    {
        cin >> x1 >> y1;
        int dif = (x1-x) + (y1-y);
        if(cur > 1)
            dif *= -1;
        if(dif < 0)
        {
            ans++;
            cur = (cur+3) % 4;
        }
        else cur = (cur+1)%4;
        x = x1; y = y1;
    }
    cout << ans << endl;
    return 0;
}