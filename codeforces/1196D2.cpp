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
    int q; cin >> q;
    string o1 = "RGB", o2 = "GBR", o3 = "BRG";
    while(q--)
    {
        int n, k; cin >> n >> k;
        int ans1 = k, ans2 = k, ans3 = k;
        int a[n] = {0}, b[n] = {0}, c[n] = {0};
        string s; cin >> s;
        if(s[0] != 'R')
            a[0] = 1;
        if(s[0] != 'G')
            b[0] = 1;
        if(s[0] != 'B')
            c[0] = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] != o1[i%3])
                a[i] = a[i-1]+1;
            else 
                a[i] = a[i-1];

            if(s[i] != o2[i%3])
                b[i] = b[i-1]+1;
            else 
                b[i] = b[i-1];

            if(s[i] != o3[i%3])
                c[i] = c[i-1]+1;
            else 
                c[i] = c[i-1];
        }
        for(int i = k-1; i < n; i++)
        {
            if(i == k-1)
                ans1 = min(ans1, a[i]);
            else 
                ans1 = min(ans1, a[i] - a[i-k]);

            if(i == k-1)
                ans2 = min(ans2, b[i]);
            else 
                ans2 = min(ans2, b[i] - b[i-k]);

            if(i == k-1)
                ans3 = min(ans3, c[i]);
            else 
                ans3 = min(ans3, c[i] - c[i-k]);
        }
        cout << min(ans1, min(ans2, ans3)) << endl;
    }
    return 0;
}