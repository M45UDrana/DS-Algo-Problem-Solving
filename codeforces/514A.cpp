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
    string s; cin >> s;
    vector<char> v;
    int a = min(9 - int(s[0]-'0'), int(s[0]-'0'));
    if(!a)
        cout << int(s[0] - '0');
    else cout << a;
    for(int i = 1; i < s.size(); i++)
    {
        cout << min(9 - int(s[i] - '0'), int(s[i] - '0'));
    }
    cout << endl;
    return 0;
}