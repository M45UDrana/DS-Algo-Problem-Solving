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
    int m, n; cin >> m >> n;
    bool A[m][n], B[m][n];
    mem(B, 1);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if(!A[i][j])
            {
                for(int l = 0; l < m; l++)
                    B[l][j] = 0;
                for(int l = 0; l < n; l++)
                    B[i][l] = 0;
            }
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(A[i][j])
            {
                bool a = true, b = true;
                for(int l = 0; l < m; l++)
                {
                    if(B[l][j])
                    {
                        a = false;
                    }
                }
                for(int l = 0; l < n; l++)
                {
                    if(B[i][l])
                    {
                        b = false;
                    }
                }
                if(a && b)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}