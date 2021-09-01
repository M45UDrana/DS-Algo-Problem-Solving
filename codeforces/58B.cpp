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
    int m; cin >> m;
    int n = sqrt(m)+0.5;
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        if(m % i == 0)
        {
            v.pb(i);
            if(m/i != i)
                v.pb(m/i);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    int sz = v.size();
    for(int i = 0; i < sz-1; i++)
    {
        for(int j = i+1; j < sz; j++)
        {
            if(v[j] != 0)
            {
                if(v[i]%v[j] != 0)
                    v[j] = 0;
            }
        }
    }
    for(int i = 0; i < sz; i++)
    {
        if(v[i])
            cout << v[i] << " ";
    }
    puts("");
    return 0;
}