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
    int T; cin >> T;
    while(T--)
    {
        int n, k; cin >> n >> k;
        int od = 0, ev = 0;
        for(int i = 0, x; i < n; i++)
        {
            cin >> x;
            if(x%2)
                od++;
            else ev++;
        }
        if(!(od%2))
            od--;
        if(k < od and !(k%2))
            cout << "No" << endl;
        else if(od + ev >= k and od > 0)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}