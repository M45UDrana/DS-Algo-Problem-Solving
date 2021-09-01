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
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(a, b) memset(a,b,sizeof(a))
     
int main()
{
    int n; cin >> n;
    if(n == 2)
        cout << 1 << endl;
    else if(n % 2 == 0)
        cout << 2 << endl;
    else
    {
        int l = sqrt(n)+1, n1 = n-2;
        bool isprime = true, isn1prime = true;
        for(int i = 3; i < l; i += 2)
        {
            if(n % i == 0)
                isprime = false;
            if(n1 % i == 0)
            {
               isn1prime = false;
               if(!isprime)
                   break;
            }
        }
        if(isprime)
            cout << 1 << endl;
        else if(isn1prime)
            cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}