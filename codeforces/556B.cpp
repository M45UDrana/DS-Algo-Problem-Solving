#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    bool ok = true;
    int dif, diff;
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        if(i%2)
        {
            if(x > i)
                dif = i + (n-x);
            else dif = i - x;
        }
        else
        {
            if(x < i)
                dif = x + (n - i);
            else dif = x - i;
        }
        if(i == 0)
            diff = dif;
        else 
        {
            if(diff != dif)
                ok = false;
        }
    }
    if(ok)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}