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
    int s, n; cin >> s >> n;
    int a = max(s, n);
    vector<int> v;
    for(int i = n; i > 0; i--)
    {
        int j = 0, k = i;
        while(!(k&1))
        {
            k>>=1;
            j++;
        }
        a = pow(2, j);
        if(s - a >= 0)
        {
            s -= a;
            v.pb(i);
        }
    }
    if(s)
    {
        puts("-1");
        return 0;
    }
    cout << v.size() << endl;
    for(auto e : v)
        cout << e << " ";
    puts("");
    return 0;
}