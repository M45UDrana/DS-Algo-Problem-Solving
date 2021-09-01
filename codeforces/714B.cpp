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
    int n; cin >> n;
    set<int>s;
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        s.insert(tmp);
    }
    if(s.size() > 3)
    {
        cout << "NO" << endl;
        return 0;
    }
    if(s.size() == 3)
    {
        vector<int>v;
        for(auto e : s)
            v.pb(e);
        if(v[0] + v[2] == v[1] * 2)
            cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}