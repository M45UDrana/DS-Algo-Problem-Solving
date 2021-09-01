#include <bits/stdc++.h>

using namespace std;

int a[125];
int main()
{
    string str;
    cin >> str;
    int n = str.size(), cnt = 0;
    for(int i = 0; i < n; i++)
    {
        a[str[i]]++;
    }
    for(int i = 97; i < 123; i++)
    {
        if(a[i] % 2 == 1)
            cnt++;
    }
    if(cnt == 0)        cout << "First" << endl;
    else if(cnt % 2 == 0)    cout << "Second" << endl;
    else                cout << "First" << endl;

    return 0;
}