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
    int n, k; cin >> n >> k;
    if( n < k)
    {
        cout << -1 << endl;
        return 0;
    }
    char a[n+5];
    for(int i = 0; i < n; )
    {
        a[i] = 'a'; i++;
        if(i < n)
        {
            a[i] = 'b'; i++;
        }
    }
    k-=2;
    char c = 'c';
    for(int i = n-k; i < n; i++)
    {
        a[i] = c; c++;
    }
    a[n] = '\0';
  //  for(int i = 0; i < n; i++)
        cout << a << endl;
    return 0;
}