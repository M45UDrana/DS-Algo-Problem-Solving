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
    int n, m; cin >> n >> m;
    int a[n] = {0};
    for(int i = 0; i < m; i++)
    {
        pair<int, int> p = {0, 0};
        for(int j = 0; j < n; j++)
        {
            int a; cin >> a;
            if(a > p.ff)
            {
                p.ff = a;
                p.ss = j;
            }
        }
        a[p.ss]++;
    }
    pair<int, int> p = {0, 0};
    for(int i = 0; i < n; i++)
    {
        if(a[i] > p.ff)
        {
            p.ff = a[i];
            p.ss = i+1;
        }
    }
    cout << p.ss << endl;
    return 0;
}