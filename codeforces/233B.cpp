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

ll s(ll num)
{
    ll sum = 0;
    while(num)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    ll n; cin >> n;
    ll r = sqrt(n);
    while((r*r)+(s(r)*r) > n) r--;

    int l = 100;
    while(l--)
    {
        if((r*r)+(s(r)*r) == n)
        {
            cout << r << endl;
            return 0;
        }
        r--;
    }
    cout << -1 << endl;
    return 0;
}