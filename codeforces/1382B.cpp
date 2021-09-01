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
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s[2] = {"First", "Second"};
        int cur = 0, ans = -1;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if(x == 1)
                cur ^= 1;
            if(x != 1 and ans == -1)
                ans = cur;
        }
        if(ans == -1)
            ans = cur^1;
        cout << s[ans] << endl;
    }
    return 0;
}