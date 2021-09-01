#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n, mins = 1001;
    cin >> n;
    int ar[n];
    cin >> ar[0];
    pair <int, int> p;
    for(int i = 1, temp; i < n; i++)
    {
        cin >> ar[i];
        temp = abs(ar[i-1] - ar[i]);
        if(mins > temp)
        {
            mins = temp;
            p.first = i;
            p.second = i+1;
        }
    }
    if(mins > abs(ar[0]-ar[n-1]))
        cout << n << " " << 1 << endl;
    else
        cout << p.first << " " << p.second << endl;

    return 0;
}