#include <bits/stdc++.h>

using namespace std;

bool lpy(int y)
{
    return ((y%400 == 0) or (y%4 == 0 and y%100 != 0));
}
int main()
{
    int y; cin >> y;
    bool ok = false;
    if(lpy(y))
        ok = true;
    int cur = 0;
    while(1)
    {
        if(lpy(y))
            cur++;
        cur = (cur+1)%7;
        y++;
        if(cur == 0 and ok == lpy(y))
            return !(cout << y << endl);
    }
    return 0;
}