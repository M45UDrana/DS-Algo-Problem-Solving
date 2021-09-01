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
        int a[n];
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i and a[i] != a[0])
                ok = true;
        }
        if(ok)
            cout << 1 << endl;
        else cout << n << endl;
    }
    return 0;
}