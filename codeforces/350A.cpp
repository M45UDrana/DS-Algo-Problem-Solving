#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e5+1;

int main()
{
    int n, m;
    cin >> n >> m;
    int minn = 100, maxn = 0, minm = 100;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        minn = min(minn, tmp); maxn = max(maxn, tmp);
    }
    for(int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        minm = min(minm, tmp);
    }
    int ans = max(minn * 2, maxn);
    if(ans < minm)  cout << ans << endl;
    else            cout << -1 << endl;
    return 0;
}