#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);


int main()
{
    int n;
    cin >> n;

    for(int i = 0, k = 2, m; i < (2*n+1); i++)
    {
        if(n < i) { m = i - k; k += 2;}
        else m = i;

        for(int i = 1; i <= n - m; i++)
            cout << "  ";

        for(int j = 0, l = 2; j <= 2*m; j++)
        {
            if(m < j)
            {
                cout << j - l;
                l+=2;
            }
            else
                cout << j;
            if(j != 2*m)
                cout <<" ";

        }
        cout <<endl;
    }

    return 0;
}