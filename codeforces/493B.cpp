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
    IO;
    int n, a, c = 0, d = 0; cin >> n;
    ll sum1 = 0, sum2 = 0;
    vector<int> v1, v2;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a > 0)
        {
            sum1 += a;
            v1.pb(a);
        }
        else 
        {
            sum2 += abs(a);
            v2.pb(abs(a));
        }
    }
    if(sum1 > sum2 )
    {
        cout << "first" << endl;
        return 0;
    }
    else if(sum1 < sum2)
    {
        cout << "second" << endl;
        return 0;
    }
    if(sum1 == sum2)
    {
        int l1 = v1.size(), l2 = v2.size();
        
        for(int i = 0; i < min(l1, l2); i++)
        {
            if(v1[i] > v2[i])
            {
                cout << "first" << endl;
                return 0;
            }
            else if(v1[i] < v2[i])
            {
                cout << "second" << endl;
                return 0;
            }
        }
        if(l1 < l2)
        {
            cout << "first" << endl;
            return 0;
        }
        else if(l1 < l2)
        {
            cout << "second" << endl;
            return 0;
        }
    }
    if(a > 0)
        cout << "first" << endl;
    else cout << "second" << endl;
    return 0;
}