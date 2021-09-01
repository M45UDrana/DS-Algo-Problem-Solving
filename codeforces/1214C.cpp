#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define ll long long

int main()
{
    int n, coun = 0, neg = 0;
    string str;
    cin >> n;
    if(n == 0)
    {
        cout << "YES" << endl;
        return 0;
    }
    cin >> str;
    if(n % 2 != 0)
    {
        cout << "NO" << '\n';
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '(')
            coun++;
        else if(str[i] == ')')
            coun--;

        if(coun <= -2)
        {
            cout << "NO" << "\n";
            return 0;
        }

    }
    if(coun == 0)
        cout << "YES" << '\n';
    else cout << "NO" << endl;
    return 0;
}