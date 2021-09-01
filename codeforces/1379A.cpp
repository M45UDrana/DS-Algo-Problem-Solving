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
#define IO ios_base::sync_with_stdio(0);

string sbs = "abacaba";

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int cnt1 = 0, cnt2 = 0, in = -1;
        for(int i = 0; i+6 < n; i++)
        {
            bool ok1 = true, ok2 = true;
            bool flg = false;
            for(int j = 0; j < 7; j++)
            {
                if(sbs[j] != s[i+j])
                    ok1 = false;
                if(sbs[j] != s[i+j] and '?' != s[i+j])
                    ok2 = false;
                if(s[i+j] == '?')
                    flg = true;
            }
            if(ok1)
                cnt1++;
            if(ok2 and flg)
            {
                cnt2++;
                in = i;
            }
        }
        if(cnt1 == 1)
        {
            cout << "Yes" << endl;
            for(int i = 0; i < n; i++)
            {
                if(s[i] == '?')
                    cout << 'z';
                else cout << s[i];
            }
            cout << endl;
        }
        else if(cnt1 == 0 and cnt2 > 0)
        {
            cout << "Yes" << endl;
            for(int i = 0; i < n; i++)
            {
                if(i == in)
                {
                    cout << sbs;
                    i += 6;
                }
                else if(s[i] == '?')
                    cout << 'z';
                else cout << s[i];
            }
            cout << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}