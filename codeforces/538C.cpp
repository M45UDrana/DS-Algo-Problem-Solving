#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int d[N], h[N];

bool istrue(int hi, int i)
{
    return ((hi-h[i]) + (hi-h[i-1])) <= (d[i]-d[i-1]);
}
int main()
{
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> d[i] >> h[i];
    int ans = (d[0]-1) + h[0];
    for(int i = 1; i < m; i++)
    {
        int left = max(h[i-1], h[i]);
        int right = min(h[i-1],h[i])+(d[i]-d[i-1]);
        while(left < right)
        {
            int mid = left + (right+1-left)/2;
            if(istrue(mid, i))
                left = mid;
            else right = mid-1;
        }
        if(istrue(left, i))
            ans = max(ans, left);
        else return !(cout << "IMPOSSIBLE" << endl);
    }
    ans = max(ans, (n-d[m-1])+h[m-1]);
    cout << ans << endl;
    return 0;
}