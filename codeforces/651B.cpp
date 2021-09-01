#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[1003];
    memset(a, 0, sizeof(a));
    for(int i = 0;i < n; i++)
    {
        int x; cin >> x;
        a[x]++;
    }
    int ans = 0;
    for(int i = 1, cnt = 0; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
            if(a[j] >= i)
                cnt++;
        if(!cnt)
            break;
        ans += cnt-1;
        cnt = 0;
    }
    cout << ans << endl;
}