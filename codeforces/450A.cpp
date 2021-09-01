#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n];
    pair <int, int> p;
    p.first = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(ar[i] % m == 0)
            ar[i] = ar[i] / m;
        else
            ar[i] = (ar[i] / m) + 1;
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(ar[i] > p.first)
        {
            p.first = ar[i];
            p.second = i;
        }
    }
    cout << p.second + 1 << endl;
    return 0;
}