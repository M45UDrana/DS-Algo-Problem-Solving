#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;
    if(!n)
        cout << n << endl;
    else if(n%2)
        cout << (n+1)/2 << endl;
    else cout << n+1 << endl;
    return 0;
}