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
    string gle, ple;
    cin >> gle >> ple;
    int lengle = gle.size(), lenple = ple.size();
    int ans = 0;
    for(int i = 0; i < lengle; i++)
    {
        int j = 0;
        bool flg = true;
        while(j < lenple)
        {
            if(j+i >= lengle)
            {
                flg = false;
                break;
            }
            if(gle[j+i] != ple[j])
            {
                flg = false;
                break;
            }
            j++;
        }
        if(flg)
        {
            i += j-1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}