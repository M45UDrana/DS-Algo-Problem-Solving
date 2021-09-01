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
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int n7 = n/7, n5 = n/5;
        bool ok = false;
        for(int i = 0; i <= n7; i++)
        {
            for(int j = 0; j <= n5; j++)
            {
                int x = (n- (i*7 + j*5))/3;
                if(n == (i*7 + j*5 + x * 3))
                {
                    cout << x << " " << j << " " << i << endl;
                    ok = true;
                }
                if(ok)
                    break;
            }
            if(ok)
                break;
        }
        if(!ok)
            cout << -1 << endl;
    }
    return 0;
}