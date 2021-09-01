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

const int N = 1e5+5;

int n;
vector<int>v;
int a[N];

int findMaxP(int i)
{
    while(i < n and a[i-1] < a[i])
        i++;
    if(i < n)
        v.pb(a[i-1]);
    return i-1;
}

int findMinP(int i)
{
    while(i < n and a[i-1] > a[i])
        i++;
    if(i < n)
        v.pb(a[i-1]);
    return i-1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        v.pb(a[0]);
        for(int i = 1; i < n-1; i++)
        {
            if(a[i-1] < a[i])
                i = findMaxP(i);
            else if(a[i-1] > a[i])
                i = findMinP(i);
        }
        v.pb(a[n-1]);
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
        v.clear();
    }
    return 0;
}