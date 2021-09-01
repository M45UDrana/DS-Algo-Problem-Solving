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
    int t; cin >> t;
    while(t--)
    {
        int a, b = -1, c; cin >> a;
        int n = sqrt(a)+1;
        bool flg = true;
        for(int i = 2; i <= n; i++)
        {
            if(a%i == 0)
            {
                b = i;
                break;
            }
        }
        if(b != -1)
        {
            for(int i = 3; i <= n; i++)
            {
                c = a / (b*i);
                if(i*b*c == a && i != b && b != c && i != c && c != 1)
                {
                    cout << "YES" << endl;
                    d(i, b, c);
                    flg = false;
                    break;
                }
            }
        }
        if(flg)
            cout << "NO" << endl;
    }
    return 0;
}