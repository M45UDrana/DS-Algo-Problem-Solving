#include <bits/stdc++.h>

using namespace std;
#define fr(i, n) for(int i = 0; i <= (int)n; i++)
#define start0 if(i == n) continue;

int ar[500002];
int main()
{
    int n;
    cin >> n;
    fr(i, n)
    {
        start0;
        cin >> ar[i];
    }
    if(n % 6 == 0)       cout << 0 << endl;
    else if(n > 6)  cout << n % 6 << endl;
    else            cout << n << endl;
}