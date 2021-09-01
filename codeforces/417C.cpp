#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n, k; 
    cin >> n >> k;
    if(int((n-1)/2) < k)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << n*k << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1, x; j <= k; j++)
        {
            (i+j > n) ? (x = (i+j)%n) : (x = i+j);
            cout << i << " " << x << "\n";
        }
    }
    return 0;
}