#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        a += (b + c);
        cout <<(a/2) << endl;
    }
    return 0;
}