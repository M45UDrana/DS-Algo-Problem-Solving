#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n;
    int ar[n];
    int a = 0, b;
    for(int i = 1; i <= n; i++)
    {
        cout << "? " << i << " " << max(1,(i+1)%(n+1)) << endl;
        fflush(stdout);
        cin >> ar[i-1];
        a = ar[i-1] - a;
    }
    a = a/2;
    cout << "!";
    fflush(stdout);
    for(int i = 0; i < n; i++)
    {
        cout << " " << a;
        a = ar[i] - a;
        fflush(stdout);
    }
    cout << endl;
    fflush(stdout);
    return 0;
}