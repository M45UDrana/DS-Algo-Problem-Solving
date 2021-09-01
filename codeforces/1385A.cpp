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
        int a[3]; cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[1] == a[2])
        cout << "YES" << endl << a[0] << " " << a[0] <<
            " " << a[1] << endl;
        else cout << "NO" << endl;
    }
    return 0;
}