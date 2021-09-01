#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    int m = ((n*n)-n)/2;
    if(k >= m)
        return !(cout << "no solution" << endl);
    for(int i = 0; i < n; i++)
        cout << 1 << " " << i+1 << endl;
    return 0;
}