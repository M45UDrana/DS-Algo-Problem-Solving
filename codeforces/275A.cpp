#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int ar[3][3], ans[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> ar[i][j];
            ar[i][j] %= 2;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            ans[i][j] = 1;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(ar[i][j] == 1)
            {
                ans[i][j] ^= 1;
                if(i+1 < 3)
                    ans[i+1][j] ^= 1;
                if(i-1 >= 0)
                    ans[i-1][j] ^= 1;
                if(j+1 < 3)
                    ans[i][j+1] ^= 1;
                if(j-1 >= 0)
                    ans[i][j-1] ^= 1;

            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}