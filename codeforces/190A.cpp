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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    int n, m, mina, maxa; cin >> n >> m;
    if(n == 0 && m != 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    mina = max(m - n, 0) + n;
    maxa = max(m - 1, 0) + n;
    d(mina, maxa, "")
    return 0;
}