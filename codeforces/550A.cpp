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
    string s, s1; cin >> s;
    s1 = s;
    int sz = s.size();
    int a = 0, b = 0;
    bool flg = true;
    for(int i = 0; i < sz-1; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B' && flg)
        {
            a++;
            s[i+1] = 'a';
            flg = false;
        }
        else if(s[i] == 'B' && s[i+1] == 'A' && !flg)
        {
            b++;
            s[i+1] = 'a';
        }
    }
    if(a&&b)
    {
        cout << "YES" << endl;
        return 0;
    }
    flg = true;
    a = 0; b = 0;
    for(int i = 0; i < sz-1; i++)
    {
        if(s1[i] == 'B' && s1[i+1] == 'A' && flg)
        {
            a++;
            s1[i+1] = 'a';
            flg = false;
        }
        else if(s1[i] == 'A' && s1[i+1] == 'B' && !flg)
        {
            b++;
            s1[i+1] = 'a';
        }
    }
    if(a && b)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}