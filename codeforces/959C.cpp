#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    if(n <= 5)
        cout << -1 << endl;
    else 
    {
        cout << 1 << " " << 2 << endl;
        cout << 2 << " " << 3 << endl;
        cout << 3 << " " << 4 << endl;
        cout << 3 << " " << 5 << endl;
        for(int i = 6; i <= n; i++)
            cout << 2 << " " << i << endl;
    }
    for(int i = 1; i < n; i++)
        cout << i << " " << i+1 << endl;
    return 0;
}