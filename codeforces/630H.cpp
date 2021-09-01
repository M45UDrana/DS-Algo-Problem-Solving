#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;
    long long k = (n-5)+1;
    long long ans = 1;
    for(int i = 0; i < 5; i++)
    {
        ans *= (n-i)*k;
    }
    cout << ans << endl;
    return 0;
}