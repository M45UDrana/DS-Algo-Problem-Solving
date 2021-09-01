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
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int rt = sqrt(n)+1;
        vector<int>div;
        for(int i = 1; i <= rt; i++)
        {
            if(!(n%i))
            {
                div.pb(i);
                if(i != n/i)
                    div.pb(n/i);
            }
        }
        sort(div.begin(), div.end());
        for(int i = div.size()-1; i >= 0; i--)
        {
            if(div[i] <= k)
            {
                cout << n/div[i] << endl;
                break;
            }
        }
    }
    return 0;
}