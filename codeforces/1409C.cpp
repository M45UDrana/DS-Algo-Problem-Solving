#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x, y; cin >> n >> x >> y;
        int d = abs(x-y), l, m = max(x,y);
        for(int i = n-1; i >= 1; i--)
        {
            if(d%i == 0)
            {
                l = d/i;
                break;
            }
        }
        vector<int> ans;
        while(int(ans.size()) != n and m > 0)
        {
            ans.push_back(m);
            m -= l;
        }
        m = max(x,y)+l;
        while(int(ans.size()) != n)
        {
            ans.push_back(m);
            m += l;
        }
        m = ans.size();
        for(int i = 0; i < m; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}