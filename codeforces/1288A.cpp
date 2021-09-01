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
        int n, d; cin >> n >> d;
        int sq = sqrt(d)+0.5;
        if(n >= d)
            cout << "YES" << endl;
        else if(n < sq)
            cout << "NO" << endl;
        else 
        {
            bool flg = true;
            for(int i = 1; i <= n; i++)
            {
                if(n >= (((d+i)/(i+1))+i))
                {
                    cout << "YES" << endl;
                    flg = false;
                    break;
                }
            }
            if(flg)
                cout << "NO" << endl;
        }
    }
    return 0;
}