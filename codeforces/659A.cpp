#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b; cin >> n >> a >> b;
    if(b < 0)
    {
        while(b++)
        {
            a--;
            if(a == 0)
                a = n;
        }
        cout << a << endl;
    }
    else if(b > 0)
    {
        while(b--)
        {
            if(a == n)
                a = 0;
            a++;
        }
        cout << a << endl;
    }
    else
        cout << a << endl;
    return 0;
}