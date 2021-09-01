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
    ll n; cin >> n;
    ll a[n], mx;
    set<int> st;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i)
            st.insert(abs(a[i-1]-a[i]));
        if(i)
            mx = max(a[i], mx);
        else mx = a[i];
    }
    ll y = *st.rbegin();
    if(st.size() > 2 or !y)
        return !(cout << "NO" << endl);
    if(n == 1)
    {
        cout << "YES" << endl;
        cout << ll(1e9) << " " << a[0] << endl;
        return 0;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(y > 1 and a[i]%y == 0 and a[i]-a[i+1] == -1)
            return !(cout << "NO" << endl);
        if(y > 1 and a[i]%y == 1 and a[i]-a[i+1] == 1)
            return !(cout << "NO" << endl);
        if(abs(a[i] - a[i+1]) != 1 and abs(a[i]-a[i+1]) != y)
            return !(cout << "NO" << endl);
    }
    cout << "YES" << endl;
    cout << ll(1e9) << " " << y << endl;

    return 0;
}