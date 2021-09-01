#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    long long n, k, p, ans = 0;
    cin >> n >> k;
    int a[n];
    priority_queue<int>b;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j <= i; j++)
        {
            b.push(a[j]);
        }
        p = k;
        while(!b.empty())
        {
            p -= b.top();
            b.pop();
            if(!b.empty())
            {
                b.pop();
            }
        }
        if(p >= 0)
        {
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}