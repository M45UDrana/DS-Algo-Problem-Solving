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
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; n; i++)
        {
            if(n%10)
            {
                int x = 1;
                for(int j = 0; j < i; j++)
                    x *= 10;
                x *= (n%10);
                v.pb(x);
            }
            n /= 10;
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}