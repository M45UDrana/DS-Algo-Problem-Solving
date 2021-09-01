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

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n == 2)
        {
            cout << 1 << " " << 1 << endl;
            continue;
        }
        int sq = sqrt(n)+1;
        vector<int> div;
        for(int i = sq; i > 1; i--)
        {
            if(n%i == 0)
            {
                div.push_back(i);
                div.push_back(n/i);
            }
        }
        if(div.size() == 0)
            cout << n-1 << " " << 1 << endl;
        else
        {
            sort(div.begin(), div.end());
            int m = div[(int) div.size()-1];
            m = ((n-1)/m)*m;
            cout << m << " " << n-m << endl;
        }
    }
    return 0;
}