#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    string str;
    char ar[100005];
    cin >> str;
    int len = str.size(), cnt = 0;
    ar[0] = ' ';
    for(int j = 0, i = 0; i < len; i++)
    {
        if(ar[j] == str[i])
        {
            cnt++;
            j--;
        }
        else
        {
            ar[++j] = str[i];
        }
    }
    if(cnt % 2) cout <<"YES"<< endl;
    else        cout << "NO"<< endl;

    return 0;
}