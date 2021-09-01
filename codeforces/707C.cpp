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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    ll n; cin >> n;
    if(n == 1 || n == 2)
        cout << -1 << endl;
    else if(n % 2 == 0)
    {
        ll k = (n*n) / 4 + 1;
        cout << k << " " << k - 2 << endl;
    }
    else 
    {
        n *= n;
        cout << (n+1)/2 << " " << (n-1)/2 << endl; 
    }
    return 0;
}