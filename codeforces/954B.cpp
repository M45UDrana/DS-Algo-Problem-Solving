#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int m = n;
    if(m%2)
        m--;
    while(m)
    {
        int i = m-1, j = m/2-1;
        bool ok = true;
        while(j >= 0)
        {
            if(s[i] != s[j])
            {
                ok = false;
                break;
            }
            i--; j--;
        }
        if(ok)
            return !(cout << n-m + (m/2+1) << endl);
        m -= 2;
    }
    cout << n << endl;
    return 0;
}