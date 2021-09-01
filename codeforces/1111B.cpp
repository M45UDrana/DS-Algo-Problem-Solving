#include <bits/stdc++.h>

using namespace std;

typedef long double ld;

int main()
{
    int n;
    ld k, m; 
    cin >> n >> k >> m;
    vector<ld> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    m -= n-1;
    ld ans = 0, p_sm = 0;
    for(ld i = 0; i < n; i++, m++)
    {
        p_sm += v[i];
        if(m >= 0)
        {
            ld sum = min(k*(i+1), m)+p_sm;
            ans = max(ans, sum/(i+1));
        }
    }
    cout << setprecision(15) << ans << endl;
    return 0;
}