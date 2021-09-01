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
        int x, y; cin >> x >> y;
        int a = 6; 
        ll b = x;
        bool flg = false;
        while(a--)
        {
            if(!(b%2))
                b = (b*3)/2;
            else if(b > 1)
                b--;
            if(b == y)
            {
                cout << "YES" << endl;
                flg = true;
                break;
            }
        }
        if(flg)
            continue;
        if(x == y || x > y)
        {
            cout << "YES" << endl;
            continue;
        }
        if(abs(x-b) < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
    return 0;
}