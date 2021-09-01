#include <iostream>
#include <vector>

using namespace std;
const int N = 1e5+2;

int main()
{
    int n; cin >> n;
    int a[N] = {0};
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
    
    long long dp[N];
    dp[1] = a[1];
    dp[2] = a[2]*2;
    dp[3] = dp[1] + (a[3]*3);
    for(long long i = 4; i < N; i++)
    {
        dp[i] = max(dp[i-2], dp[i-3]) + (a[i]*i);
    }
    cout << max(dp[N-1], dp[N-2]) << endl;
}