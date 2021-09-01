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
    int n, k, sum = 0; cin >> n >> k;
    int a[n][n]={0};
    int l = k - 1;
    int it = l*n+1, in = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = l; j < n; j++)
        {
            if(j == l) sum += it;
            a[i][j] = it; it++;
        }
        for(int j = 0; j < l; j++)
        {
            a[i][j] = in; in++;
        }
    }
    cout << sum << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}