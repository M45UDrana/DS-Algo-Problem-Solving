#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
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
    ll n, k; cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll lft = 1, rht = 1e9;
    while(lft <= rht)
    {
        ll md = (lft+rht)/2;
        ll cnt = 0;
        for(int i = 0; i < n; i++)
            if(a[i] <= md)
                cnt++;
        if(cnt == k)
            return !(cout << md << endl);
        else if(cnt > k)
            rht = md-1;
        else lft = md+1;
    }
    cout << -1 << endl;
    return 0;
}