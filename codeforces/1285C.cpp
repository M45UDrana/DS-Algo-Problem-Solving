#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n; cin >> n;
    long long sq = sqrt(n);
    long long a = 1, b = n;
    for(int i = 2; i <= sq; i++)
    {
        if(n%i == 0 && b > (n/i) && (n/i)%i != 0)
        {
            a = i;
            b = n/i;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}