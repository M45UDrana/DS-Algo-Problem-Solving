#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    IO
    int n, a;
    cin >> n;

    while(n--)
    {
        cin >> a;
        int x = 0, tmp;
        tmp = a;
        while(tmp)
        {
            tmp = tmp >> 1;
            x++;
        }
        x = pow(2, x) - 1;
        if(x != a)
            cout << x << '\n';
        else
        {
            int rt = sqrt(a)+1, i;
            for(i = 2; i < rt; i++)
            {
                if(a % i == 0)
                {
                    cout << a / i << '\n';
                    break;
                }
            }
            if(a % i != 0)
                cout << 1 << '\n';
        }
    }


    return 0;
}