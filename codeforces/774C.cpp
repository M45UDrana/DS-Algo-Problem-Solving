#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    if(n%2)
    {
        cout << 7;
        n /= 2;
        for(int i = 1; i < n; i++)
            cout << 1;
    }
    else
    {
        n /= 2;
        for(int i = 0; i < n; i++)
            cout << 1;
    }
    cout << endl;
    return 0;
}