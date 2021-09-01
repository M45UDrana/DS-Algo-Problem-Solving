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
    int n; cin >> n;
    int a[103] = {0};
    for(int i = 0; i < n; i++)
    {
        int tmp; cin >> tmp;
        a[tmp]++;
    }
    double ans = 0;
    for(int i = 0; i < 103; i++)
    {
        ans += (a[i] / 4);
        a[i] %= 4;
        ans += ((a[i]/2) * 0.5);
    }
    cout << int(ans) << endl;
    return 0;
}