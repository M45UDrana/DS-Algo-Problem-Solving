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
#define IO ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        cout << int((abs(a-b)+9) / 10) << endl;
    }
    return 0;
}