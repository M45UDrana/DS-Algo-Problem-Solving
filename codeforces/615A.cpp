#include <iostream>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int a[n+1] = {0};
    for(int i = 0; i < m; i++)
    {
        int k; cin >> k;
        for(int j = 0, b; j < k; j++)
        {
            cin >> b;
            a[b] = 1;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(a[i])
            cnt++;
    if(cnt == n)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}