#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s = "";
        for(int i = 0; i < 200; i++)
            s += 'a';
        cout << s << endl;
        char c = 'b';
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            for(int j = 0; j < x; j++)
                cout << s[j];
            for(int j = x; j < 200; j++)
            {
                cout << c;
                s[j] = c;
            }
            cout << endl;
            c++;
            if(c == 'z')
                c = 'a';
        }
    }
    return 0;
}