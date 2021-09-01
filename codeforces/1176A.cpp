#include <bits/stdc++.h>

using namespace std;
#define fr(i, n) for(int i = 0; i <= (int)n; i++)

int main()
{
    int t, flag = 1;
    cin >> t;
    while(t--)
    {
        unsigned long long n, coun = 0;
        cin >> n;
        flag = 1;
        while(n != 1)
        {
            if(n % 2 == 0)
            {
                coun++;
                n /= 2;
            }
            else if(n % 3 == 0)
            {
                coun++;
                n = (n * 2) / 3;
            }
            else if(n % 5 == 0)
            {
                coun++;
                n = (n * 4) / 5;
            }
            else
            {
                flag = 0;
                cout << -1 << endl;
                break;
            }
        }
        if(flag != 0)
            cout << coun << endl;
    }
    return 0;
}