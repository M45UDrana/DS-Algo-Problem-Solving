#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

char a[205];
int main()
{
    cin >> a;
    int n = strlen(a);
    if(n == 2 || n == 1)
    {
        cout << a << endl;
        return 0;
    }
    bool flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B')
        {
            if(flag)
                cout << ' ';
            i+=2;
            flag = 0;
        }
        else
        {
            cout << a[i];
            flag = 1;
        }
    }


    return 0;
}