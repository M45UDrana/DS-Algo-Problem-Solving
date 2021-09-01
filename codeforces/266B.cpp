#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n, pos;
    cin >> n >> pos;
    string str;
    cin >> str;
    while(pos--)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(str[i] == 'B')
            {
                str[i] = str[i+1];
                str[i+1] = 'B';
                if(str[i] != 'B')
                    i++;
            }
        }
    }
    cout << str << endl;
    return 0;
}