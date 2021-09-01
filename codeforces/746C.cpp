#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, x1, x2; cin >> s >> x1 >> x2;
    int t1, t2; cin >> t1 >> t2;
    int p , d; cin >> p >> d;
    int cur = 0;
    while(p != x1)
    {
        cur += t1;
        if(p == s)
            d = -1;
        else if(p == 0)
            d = 1;

        if(d == 1)
            p++;
        else p--;
    }
    while(p != x2) 
    {
        cur += t1;
        if(p == s)
            d = -1;
        else if(p == 0)
            d = 1;

        if(d == 1)
            p++;
        else p--;
    }
    int ans = t2*abs(x1-x2);

    cout << min(ans, cur) << endl;
    return 0;
}