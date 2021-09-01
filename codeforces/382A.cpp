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
    string scale, weight;
    cin >> scale >> weight;
    vector<char> a, b;
    int n = scale.size();
    bool flg = true;
    for(int i = 0; i < n; i++)
    {
        if(scale[i] == '|')
            flg = false;
        else if(flg)
            a.pb(scale[i]);
        else b.pb(scale[i]);
    }
    int asz = a.size(), bsz = b.size();
    if(weight.size() < abs(asz - bsz))
    {
        cout << "Impossible" << endl;
        return 0;
    }
    if((weight.size()-abs(asz - bsz))%2 != 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }
    n = max(a.size(), b.size()) + (weight.size() - abs(asz - bsz)) / 2;
    int i = 0;
    for(; i < n-asz; i++)
        a.pb(weight[i]);
    for(; i < weight.size(); i++)
        b.pb(weight[i]);
    for(i = 0; i < a.size(); i++)
        cout << a[i];
    cout << "|";
    for(i = 0; i < b.size(); i++)
        cout << b[i];
    puts("");
    return 0;
}