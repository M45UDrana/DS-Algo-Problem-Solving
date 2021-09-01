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
    int t; cin >> t;
    getchar();
    string s;
    while(t--)
    {
        getline(cin, s);
        int n = s.size();
        int fd = 0, rb = 0;
        if(n < 5)
        {
            cout << "OMG>.< I don't know!" << endl;
            continue;
        }
        if(s.substr(n-5, 5) == "lala.")
            fd = 1;
        if(s.substr(0, 5) == "miao.")
            rb = 1;
        if(fd == 1 && rb == 0)
            cout << "Freda's" << endl;
        else if(fd == 0 && rb == 1)
            cout << "Rainbow's" << endl;
        else 
            cout << "OMG>.< I don't know!" << endl;
    }
    return 0;
}