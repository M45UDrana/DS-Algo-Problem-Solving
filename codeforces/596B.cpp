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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
const int N = 1e5+5;
 
int main()
{
    int n; cin >> n;
    ll value = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        ans += abs(value - tmp);
        value = tmp;
    }
    cout << ans << endl;
    return 0;
}