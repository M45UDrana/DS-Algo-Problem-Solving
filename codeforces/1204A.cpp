#include <bits/stdc++.h>

using namespace std;
#define fr(i, n) for(int i = 0; i <= (int)n; i++)

int main()
{
    char str[1000];
    cin >> str;
    int len = strlen(str);
    if(len == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    int coun=0;
    fr(i, len)
    {
        if(i == len)        continue;
        if(str[i] == '1')   coun++;
        if(coun > 1)        break;
    }
    if(len % 2 == 0 )
    {
        cout << (len / 2) << endl;
    }
    else if(coun > 1 )
    {
        cout << ceil((double)len / 2) << endl;
    }
    else cout << len / 2 << endl;

}