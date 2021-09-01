#include <bits/stdc++.h>

using namespace std;

int n, ans = 0, L, R;
const int N = pow(2, 11);
vector<int>lght(N, 0), sumlt(N, 0);

int bfs(int u)
{
    if(L <= u and u <= R)
        return lght[u];
    int sum1 = bfs(u*2);
    int sum2 = bfs(u*2+1);
    ans += abs(sum1 - sum2);
    return lght[u] + max(sum1, sum2);
}
int main()
{
    cin >> n;
    int m = pow(2, n+1) - 1;
    for(int i = 2; i <= m; i++)
        cin >> lght[i];
    L = pow(2, n), R = m;
    bfs(1);
    cout << ans << endl;
    return 0;
}