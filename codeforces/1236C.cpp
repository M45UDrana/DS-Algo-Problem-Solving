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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    int n; cin >> n;
    vector<int>v[n];
    int b = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            v[j].pb(b++);
        }
        for(int k = n-1; k >= 0; k--)
        {
            v[k].pb(b++);
        }
        i++;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
           cout << v[i][j] << " ";
       cout << endl; 
    }
    return 0;
}