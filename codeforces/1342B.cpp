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
    int T; cin >> T;
    while(T--)
    {
        string t; cin >> t;
        int a0 = 0, a1 = 0;
        int n = t.size();
        for(int i = 0;i < n; i++)
        {
            if(t[i] == '0')
                a0 = 1;
            if(t[i] == '1')
                a1 = 1;
        }
        if(a0+a1 == 1)
        {
            cout << t << endl;
            continue;
        }
        string s = "";
        for(int i = 0; i < n-1; i++)
        {
            if(t[i] == '0')
            {
                s += '0';
                if(t[i+1] == '0')
                    s += '1';
            }
            else 
            {
                s += '1';
                if(t[i+1] == '1')
                    s += '0';
            }
        }
        s += t[n-1];
        cout << s << endl;
    }
    return 0;
}