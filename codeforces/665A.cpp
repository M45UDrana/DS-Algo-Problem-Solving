#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, ta; cin >> a >> ta;
    int b, tb; cin >> b >> tb;
    int x,y; char c; cin >> x >> c >> y;
    int st = (x-5)*60 + y;
    int end = st + ta;
    int ans = 0;
    for(int i = 0; i < 1140; i+=b)
    {
        if(max(st, i) < min(end, i+tb))
            ans++;
    }
    cout << ans << endl;
    return 0;
}