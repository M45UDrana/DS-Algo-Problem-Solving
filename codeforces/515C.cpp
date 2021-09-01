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

vector<int>v;
void F(int k)
{
    if(k == 2)
    {
        v.pb(2);
    }
    if(k == 3)
    {
        v.pb(3);
    }
    if(k == 4)
    {
        v.pb(3); v.pb(2); v.pb(2);
    }
    if(k == 5)
    {
        v.pb(5);
    }
    if(k == 6)
    {
        v.pb(5); v.pb(3);
    }
    if(k == 7)
    {
        v.pb(7);
    }
    if(k == 8)
    {
        v.pb(7); v.pb(2); v.pb(2); v.pb(2);
    }
    if(k == 9)
    {
        v.pb(7); v.pb(3); v.pb(3); v.pb(2);
    }
}

int main()
{
    int n; cin >> n;
    ll a; cin >> a;
    while(a)
    {
        F(a%10);
        a /= 10;
    }
    sort(v.begin(), v.end(), greater<int>());
    for(auto i: v)
        cout << i ;
    puts("");
    return 0;
}