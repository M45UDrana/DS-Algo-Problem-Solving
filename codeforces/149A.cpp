#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n = 12, k, tmp, ans = 0;
    cin >> k;
    priority_queue<int>p;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        p.push(tmp);
    }
    while(!p.empty() && k > 0)
    {
        ans++;
        k -= p.top(); p.pop();
    }
    if(k <= 0)
        cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}