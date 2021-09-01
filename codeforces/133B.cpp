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
const int M = 1e6+3;
int main()
{
    vector<pair<char, string>> v = {{'>', "1000"}, {'<', "1001"},
        {'+', "1010"}, {'-', "1011"}, {'.', "1100"}, {',', "1101"}
        , {'[', "1110"}, {']', "1111"}};
    string s, g; cin >> s;
    int n = s.size();

    for(int i = 0, j; i < n; i++)
    {
        j = 0;
        while(s[i] != v[j].ff)
            j++;
        g += v[j].ss;
    }
    int ans = 0;
    n = g.size();
    for(int i = n-1, j = 1; i >= 0; i--, j = (j*2)%M)
    {
        if(g[i] == '1')
            ans = (ans + j) % M;
    }
    cout << ans << endl;
    return 0;
}