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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))
#define white 0
#define grey 1
#define black 2

int a[50][50];
int color[50];
int n;
ll ans = 1;

void dfsvisit(int ind)
{
    color[ind] = grey;
    for(int i = 0; i < n; i++)
    {
        if(a[ind][i] == 1)
            if(color[i] == white)
            {
                ans *= 2;
                dfsvisit(i);
            }
    }
    color[ind] = black;
}

void dsf()
{
    for(int i = 0; i < n; i++)
    {
        if(color[i] == white)
            dfsvisit(i);
    }
}

int main()
{
   // input;
    int m; cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        x--; y--;
        a[x][y] = 1; a[y][x] = 1;
    }
    dsf();
    cout << ans << endl; 
    return 0;
}