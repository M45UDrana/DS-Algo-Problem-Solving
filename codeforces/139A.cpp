#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n, d[7];
    cin >> n;
    cin >> d[0] >> d[1] >> d[2] >> d[3] >> d[4] >> d[5] >> d[6];
    n = n % (d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]);
    if(n == 0)
    {
        for(int i = 6; i >= 0; i--)
        {
            if(d[i] != 0)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    for(int i = 0; i < 7; i++)
    {
        n -= d[i];
        if(n <= 0)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}