#include <bits/stdc++.h>

using namespace std;
#define f0(i, n) for(int i = 0; i < (int)n; i++)
#define f1(i, n) for(int i = 1; i <= (int)n; i++)

int main()
{
    int t, temp;
    cin >> t;
    while(t--)
    {
        int coun = 0, j = 0, value1 = 0, value2 = 0;
        int n;
        cin >> n;
        f0(i, n)
        {
            cin >> temp;
            if(temp % 3 == 0)
                coun++;
            else if(temp % 3 == 1)
                value1++;
            else if(temp % 3 == 2)
                value2++;
        }
        if(value2 < value1)
        {
            coun += value2;
            coun += (value1 - value2) / 3;
        }
        else
        {
            coun += value1;
            coun += (value2 - value1) / 3;
        }


        cout << coun << endl;
    }
    return 0;
}