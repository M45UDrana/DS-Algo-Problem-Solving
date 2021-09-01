#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    IO
    int n, min_pr = 5e5, max_pr = 0, dic = 0;
    cin >> n;
    int a[n];
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
        min_pr = min(min_pr, a[i]);
        max_pr = max(max_pr, a[i]);
    }
    int div = sqrt(max_pr);

    for(int i = 2; i <= div; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int tmp = 0;
            if(a[j] % i == 0 && i != a[j])
            {
                tmp -= a[j] - (a[j] / i);
                tmp += (min_pr * i) - min_pr;
            }
            dic = min(dic, tmp);
        }
    }
    cout << ans + dic << endl;

    return 0;
}