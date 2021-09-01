#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 2e5+3;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int>sp(n+1, 0);
        int m; cin >> m;
        for(int i = 0; i < m; i++)
        {
            int p, s; cin >> p >> s;
            sp[s] = max(sp[s], p);
        }
        for(int i = n-1; i >= 0; i--)
        {
            if(sp[i] < sp[i+1])
                sp[i] = sp[i+1];
        }
        int ans = 1, len = sp.size();
        for(int i = 0, l = 1, mstr = 0; i < n; i++)
        {
            mstr = max(mstr, a[i]);
            if(mstr > sp[0])
            {
                ans = -1;
                break;
            }
            if(l == len || sp[l] < mstr)
            {
                ans++;
                mstr = 0;
                l = 1;
                i--;
            }
            else l++;
        }
        cout << ans << endl;
    }
    return 0;
}
/*

2
2 58
5
90 2
9 2
68 1
64 1
13 1
*/