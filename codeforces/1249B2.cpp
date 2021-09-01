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
    IO;
    int q; cin >> q;
    while(q--)
    {
        int n; cin >> n;
        int a[n], ans[n];
        vector<int>finish(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 1; i <= n; i++)
        {
            if(!finish[i-1])
            {
            int tmp = a[i-1], cnt = 1;
            vector<int>circle;
            circle.pb(tmp);
            finish[tmp-1] = 1;
            while(tmp != i)
            { 
                tmp = a[tmp-1]; cnt++;
                circle.pb(tmp);
                finish[tmp-1] = 1;
            }
            for(int j = 0; j < circle.size(); j++)
                ans[circle[j]-1] = cnt;
            }
        }

        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}