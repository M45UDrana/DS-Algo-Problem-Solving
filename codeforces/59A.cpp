#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    string str;
    cin >> str;
    int len = str.size(), counup = 0, counlow = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            counup++;
        else counlow++;
    }
    if(counup > counlow)
    {
        for(int i = 0; i < len; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z'){
                char a = str[i] - 'a' + 'A'; cout << a;}
            else cout << str[i] ;
        }
    }
    else
    {
        for(int i = 0; i < len; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z'){
                char a = str[i] - 'A' + 'a'; cout << a;}
            else cout << str[i] ;
        }
    }

    return 0;
}