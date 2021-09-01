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
    IO;
    int n, m; cin >> n >> m;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        v[i] = a * b;
        if(i == 0) continue;
        v[i] += v[i-1];
    }
    for(int i = 0; i < m; i++)
    {
        int a; cin >> a;
        int l = 0, r = n-1;
        while(l < r)
        {
            int mid = (l+r) / 2;
            if(v[mid] < a)
                l = mid+1;
            else r = mid;
        }
        cout << r+1 << endl;
    }
    return 0;
}