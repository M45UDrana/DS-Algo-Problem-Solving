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

int hm[100002];
int main()
{
    int n; cin >> n;
    int wy[n+1];
    for(int i = 0; i < n; i++)
    {
        int a, b; cin >> a >> b;
        hm[a]++; wy[i] = b;
    }
    n--;
    for(int i = 0; i <= n; i++)
    {
        d(n+hm[wy[i]], n-hm[wy[i]], "");
    }
    return 0;
}