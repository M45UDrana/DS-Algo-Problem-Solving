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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int b[n], a1 = 0, b1 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        if(a[i] == b[i])
        {
            a[i] = 0;
            b[i] = 0;
        }
        a1 += a[i];
        b1 += b[i];
    }
    if(a1 == 0)
        cout << -1 << endl;
    else if(b1 == 0)
        cout << 1 << endl;
    else 
    cout << (int)(b1/a1)+1 << endl;
    return 0;
}