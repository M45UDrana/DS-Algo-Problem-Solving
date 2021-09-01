#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    int n; cin >> n;
    while(n--)
    {
        ll c, sum; cin >> c >> sum;
        ll res = 0, a = sum/c;
        sum -= a * c;
        for(int i = 0; i < c; i++)
        {
            ll b = a;
            if(sum > 0)
            {
                b++; sum--;
            }
            res += pow(b, 2);
        }
        cout << res << endl;
    }
    return 0;
}