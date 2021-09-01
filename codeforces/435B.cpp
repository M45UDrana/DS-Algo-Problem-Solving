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
    string s; int k;
    cin >> s >> k;
    int n = s.size();
    for(int i = 0, pos; i < n-1; i++)
    {
        pos = i;
        char a = s[i];
        for(int j = i+1; j-i <= k && j < n; j++)
        {
            if(a < s[j] && pos < j)
            {
                pos = j;
                a = s[j];
            }
        }
        while(pos != i)
        {
            swap(s[pos], s[pos-1]);
            pos--;
            k--;
        }
    }
    cout << s << endl;
    return 0;
}