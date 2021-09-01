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
const long double oo = 1e9+7;

int main()
{
    int n; cin >> n;
    long double x, y; cin >> x >> y;
    set<long double> s;
    for(int i = 0; i < n; i++)
    {
        int x1, y1; cin >> x1 >> y1;
        if(x1-x == 0)
            s.insert(oo);
        else s.insert((y1-y)/(x1-x));
    }
    cout << s.size() << endl;
    return 0;
}