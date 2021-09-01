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
    ll n, m; cin >> n >> m;
    ll a[m];
    for(int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a+m);
    if(a[0] == 1 || a[m-1] == n)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < m-2; i++)
    {
        if(a[i]==a[i+1]-1 && a[i+1] == a[i+2]-1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}