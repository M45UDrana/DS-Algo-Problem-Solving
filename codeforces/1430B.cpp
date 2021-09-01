#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
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
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        sort(v.rbegin(),v.rend());
        ll sum = 0;
        for(int i = 0; i <= k; i++)
            sum += v[i];
        cout << sum << endl;
    }
    return 0;
}