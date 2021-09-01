#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int n;
    cin >> n;
    if(n %  2 ==0)
    {
        for(int i = 1; i <= n; i+=2)
            cout << i+1 << " " << i << " ";
    }
    else cout << -1 << endl;
    return 0;
}