#include <bits/stdc++.h>

using namespace std;
#define fr(i, n) for(int i = 0; i <= (int)n; i++)

int main()
{
    int n, l, r, maxans = 0, minans = 0;
    cin >> n >> l >> r;

    fr(i, l)
    {
        if(i == l)  continue;
        minans += pow(2, i);
    }
    minans += (n-l);
    fr(i, r)
    {
        if(i == r) continue;
        maxans += pow(2, i);
    }
    maxans += ((n-r) * pow(2, r-1));
    cout << minans << " " << maxans << endl;
}