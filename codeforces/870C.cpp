#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n%2 == 0)
        {
            if(n < 4)
                cout << -1 << endl;
            else 
                cout << int(n/4) << endl;
        }
        else 
        {
            if(n < 9 or n == 11)
                cout << -1 << endl;
            else cout << int((n-9)/4)+1 << endl;
        }
    }
    return 0;
}