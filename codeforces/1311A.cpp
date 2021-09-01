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
        int a, b; cin >> a >> b;
        if(a == b)
            cout << 0 << endl;
        else if(a < b)
        {
            int dif = abs(a-b);
            if(dif%2)
                cout << 1 << endl;
            else cout << 2 << endl;
        }
        else 
        {
            int dif = abs(a-b);
            if(dif%2)
                cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    return 0;
}