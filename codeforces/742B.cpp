#include <iostream>

using namespace std;
const int N = 1e5+5;

int b[N];
int main()
{
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x = (a[i]^k);
        if(k != 0 and x <= N)
            ans += b[x];
        else if(x <= N)
            ans += max(0, b[x] - 1);
    }
    cout << ans/2 << endl;
    return 0;
}