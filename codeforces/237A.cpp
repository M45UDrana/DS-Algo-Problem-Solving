#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=3e5+5;

int main()
{
    int n, coun = 1, ans = 1;
    cin >> n;
    vector<pair <int, int>> p(n);
    for(int i = 0, temp; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(), p.end());
    for(int i = 0; i < n; i++)
    {
        if( p[i].first == p[i+1].first && p[i].second == p[i+1].second)
            coun++;
        else
        {
            ans = max(ans, coun);
            coun = 1;
        }
    }
    cout << ans << endl;
    return 0;
}