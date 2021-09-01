#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
int main()
{
    ull n, k; cin >> n >> k;
    cout << (ull)(k+n-1) / n << endl;
    return 0;
}