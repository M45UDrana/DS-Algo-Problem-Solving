#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k1, k2; cin >> n >> k1 >> k2;
    int k = k1+k2;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    priority_queue<int> r;
    for(int i = 0; i < n; i++)
        r.push(abs(a[i]-b[i]));
    
    while(k--)
    {
        int x = r.top();
        r.pop();
        if(!x)
            r.push(x+1);
        else
            r.push(x-1);
    }
    long long ans = 0;
    while(!r.empty())
    {
        long long x = r.top();
        r.pop();
        ans += x*x;
    }
    cout << ans << endl;
    return 0;
}