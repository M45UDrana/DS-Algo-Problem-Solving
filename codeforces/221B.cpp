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

int digit[10] = {0};

void digitN(int n)
{
    while(n)
    {
        digit[n%10]++;
        n /= 10;
    }
}

int main()
{
    int n; cin >> n;
    digitN(n);
    int rn  = sqrt(n);
    vector<int> ft;
    for(int i = 1; i <= rn; i++)
    {
        if(n%i == 0)
        {
            ft.pb(i);
            if(n/i != i)
                ft.pb(n/i);
        }
    }
    int ans = 0;
    for(int i = 0; i < ft.size(); i++)
    {
        int a = ft[i];
        while(a)
        {
            if(digit[a%10] > 0)
            {
                ans++;
                break;
            }
            a /= 10;
        }
    }
    cout << ans << endl;
    return 0;
}