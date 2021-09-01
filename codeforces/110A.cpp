#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    long long n, divis, coun = 0;
    cin >> n;
    while(n > 10)
    {
        divis = n % 10;
        if(divis == 4 || divis == 7)
            coun++;
        n /= 10;

    }
    if(n == 4 || n == 7)
        coun++;
    if(coun == 4 || coun == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}