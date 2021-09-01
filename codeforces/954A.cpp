#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < n-1; i++)
        if(s[i] != s[i+1])
        {
            cnt++;
            i++;
        }
    cout << n-cnt << endl;
    return 0;
}