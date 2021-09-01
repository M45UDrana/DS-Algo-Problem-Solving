#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n][n];
    memset(a, 0, sizeof(a));
    int x = n/2, y = n/2, ev = 2, od = 1;
    bool flg = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(x <= j and j <= y)
            {
                cout << od << " ";
                od += 2;
            }
            else 
            {
                cout << ev << " ";
                ev += 2;
            }
        }
        cout << endl;
        if(flg)
        {
            x--; y++;
            if (x == 0) flg = false;
        }
        else 
        {
            x++; y--;
        }
    }
    return 0;
}