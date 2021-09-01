#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 2e5+7;
int main()
{
    int n, k, ans = 1e9; cin >> n >> k;
    vector<int>a(n), v(N, 0), move(N, 0);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0, cnt = 1; i < n; i++, cnt = 1)
    {
        v[a[i]]++;
        if(v[a[i]] >= k)
            ans = min(ans, move[a[i]]);
        while(a[i])
        {
            a[i] /= 2;
            v[a[i]]++;
            move[a[i]] += cnt;
            cnt++;
            if(v[a[i]] >= k)
                ans = min(ans, move[a[i]]);
        }
    }
    cout << ans << endl;
    return 0;
}