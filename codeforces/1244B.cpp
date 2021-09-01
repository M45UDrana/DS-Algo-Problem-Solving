#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
 
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0)
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; string st; 
        cin >> n >> st; n--;
        int cnt = 0;
        for(int i = 0; i <= n; i++)
        {
            if(st[i] == '1')
            {
                cnt = n+1-i;
                break;
            }
            else if(st[n-i] == '1')
            {
                cnt = n+1-i;
                break;
            }
        }
        if(cnt)
            cout << cnt+cnt << endl;
        else
            cout << n+1 << endl;
    }
    return 0;
}