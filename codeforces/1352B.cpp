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
        int n, k; cin >> n >> k;
        if(n < k)
            cout << "NO" << endl;
        else if((n-(k-1))%2)
        {
            cout << "YES" << endl;
            for(int i = 1; i < k; i++)
                cout << 1 << " ";
            cout << n - (k-1) << endl;
        }
        else if(n <= ((k-1)*2))
            cout << "NO" << endl;
        else if(!((n-((k-1)*2))%2))
        {
            cout << "YES" << endl;
            for(int i = 1; i < k; i++)
                cout << 2 << " ";
            cout << n - ((k-1)*2) << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}