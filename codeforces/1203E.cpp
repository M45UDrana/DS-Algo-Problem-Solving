#include <iostream>

using namespace std;
const int N = 150002;

int main()
{
    int n; cin >> n;
    int a[N] = {0};
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        a[x]++;
    }
    for(int i = 150000; i >= 2; i--)
    {
        if(a[i] >= 2)
        {
            a[i]--;
            a[i-1]++;
        }
    }
    for(int i = 1; i <= 150000; i++)
    {
        if(a[i] >= 2)
        {
            a[i]--;
            a[i+1]++;
        }
    }
    int ans = 0;
    for(int i = 0; i <= 150001; i++)
        if(a[i])
            ans++;
    cout << ans << endl;
    return 0;
}