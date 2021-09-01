#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, kk, flag = 1;
    long long ans = 0;
    string str;
    cin >> n >> kk;
    int a[n];
    priority_queue <int> pq;

    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> str;

    for(int i = 0, k = kk; i < n; i++, k = kk)
    {
        if(i == n-1)
        {
            flag = 0;
        }
        if(str[i] == str[i+1] && flag)
        {
            pq.push(a[i]);
        }
        else
        {
            pq.push(a[i]);
            while(!pq.empty())
            {
                if(k > 0)
                {
                    ans += pq.top();
                    k--;
                }
                pq.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}