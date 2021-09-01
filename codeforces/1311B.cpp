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
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n], b[n];
        a[0] = b[0] = 0;
        bool flg = true;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        int pos[103] = {0};
        for(int i = 0; i < m; i++)
        {
            int x; cin >> x;
            pos[x]++;
        }
        int l = 0;
        for(int i = 1; i < 104; i++)
        {
            if(!pos[i] and l)
            {
                sort(a+(l-1), a+min(i, n));
                l = 0;
            }
            else if(pos[i] and !l)
                l = i;
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                flg = false;
                break;
            }
        }
        if(flg)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}