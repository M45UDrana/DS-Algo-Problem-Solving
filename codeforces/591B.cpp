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
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int a[26];
    for(int i = 0; i < 26; i++)
        a[i] = i + 'a';
    while(m--)
    {
        char c1, c2; cin >> c1 >> c2;
        for(int i = 0; i < 26; i++)
        {
            if(a[i] == c1)
                a[i] = c2;
            else if(a[i] == c2)
                a[i] = c1;
        }
    }
    for(int i = 0; i < n; i++)
    {
        int in = s[i]-'a';
        cout << char(a[in]);
    }
    puts("");
    return 0;
}