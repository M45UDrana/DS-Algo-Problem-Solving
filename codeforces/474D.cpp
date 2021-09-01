#include <iostream>

using namespace std;
const int oo = 1e9+7;
const int N = 1e5+5;

int a[N];
int p[N];
int main()
{
    int n, k; cin >> n >> k;
    for(int i = 0; i < N; i++)
    {
        if(i < k)
            a[i] = 1;
        else a[i] = (a[i-1] + a[i-k])%oo;
        if(i != 0)
            p[i] = (p[i-1]+a[i])%oo;
    }
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        cout << ((p[y] - p[x-1]) + oo)%oo << endl;
    }
    return 0;
}