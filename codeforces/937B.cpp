#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, y; cin >> p >> y;
    int t = 300;
    while(t-- and y)
    {
        int sq = sqrt(y) + 0.5;
        bool ok = true;
        for(int i = 2; i <= sq; i++)
        {
            if(y%i == 0 and i <= p)
            {
                ok = false;
                break;
            }
        }
        if(ok and p < y)
            return !(cout << y << endl);
        y--;
    }
    cout << -1 << endl;
    return 0;
}