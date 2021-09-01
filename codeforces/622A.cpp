#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    int i = 1;
    while(i < n)
    {
        n -= i;
        i++;
    }
    cout << n << endl;
    return 0;
}