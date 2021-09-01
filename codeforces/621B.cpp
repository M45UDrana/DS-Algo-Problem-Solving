#include <iostream>

using namespace std;
const int N = 1001;

int a[N][N];

inline int righT(int i, int j)
{
    int cnt = 0;
    while(i < N and j < N)
    {
        if(a[i][j] == 1)
            cnt++;
        i++; j++;
    }
    return cnt;
}

inline int leftT(int i, int j)
{
    int cnt = 0;
    while(i < N and j >= 1)
    {
        if(a[i][j] == 1)
            cnt++;
        i++, j--;
    }
    return cnt;
}
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        a[x][y] = 1;
    }
    long long ans = 0;
    for(int i = 1, x; i <= N; i++)
    {
        x = righT(i, 1);
        ans += ((x*x)-x)/2;
        x = leftT(1, i);
        ans += ((x*x)-x)/2;
        if(i != 1)
        {
            x = righT(1, i);
            ans += ((x*x)-x)/2;
            x = leftT(i, N);
            ans += ((x*x)-x)/2;
        }
    }
    cout << ans << endl;
}