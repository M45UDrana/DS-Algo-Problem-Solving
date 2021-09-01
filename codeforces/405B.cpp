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
    int a[n] = {0};
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++) 
    {
        if(s[i] == 'L')
        {
            int j = i;
            while(s[j] != 'R' && j >= 0)
            {
                a[j] = 1;
                j--;
            }
            if(s[j] == 'R' && j >= 0)
            {
                a[j] = 1;
                ans += ((i + 1 - j) & 1);
            }
        }
        if(s[i] == 'R')
        {
            int j = i;
            while(s[j] != 'L' && j < n)
            {
                a[j] = 1;
                j++;
            }
            if(s[j] == 'L' && j < n)
            {
                a[j] = 1;
                ans += ((j + 1 - i) & 1);
            }
            i = j;
        }
    }
    for(int i = 0; i < n; i++)
        if(a[i] == 0) ans++;
    cout << ans << endl;
    
    return 0;
}