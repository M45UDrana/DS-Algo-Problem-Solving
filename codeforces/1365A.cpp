#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define PI 3.14159265
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
        int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0,x; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(!a[i][j])
                {
                    bool ok = true;
                    for(int k = 0; k < m and ok; k++)
                    {
                        if(a[i][k])
                        {
                            ok = false;
                            break;
                        }
                    }
                    for(int k = 0; k < n and ok; k++)
                    {
                        if(a[k][j])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if(ok)
                    {
                        a[i][j] = 1;
                        sum++;
                    }
                }
            }
        }
        if(sum%2)
            cout << "Ashish" << endl;
        else cout << "Vivek" << endl;
    }
    return 0;
}