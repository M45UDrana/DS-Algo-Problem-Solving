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
#define IO ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define mem(a, b) memset(a,b,sizeof(a))

int main()
{
    string st[8];
    for(int i = 0; i < 8; i++)
        cin >> st[i];

    int fora = 9, forb = 9;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(st[j][i] == 'W')
            {
                fora = min(fora, j);
                break;
            }
            if(st[j][i] == 'B')
            {
                break;
            }
        }
    }
    for(int i = 7; i >= 0; i--)
    {
        for(int j = 7; j >= 0; j--)
        {
            if(st[j][i] == 'W')
            {
                break;
            }
            if(st[j][i] == 'B')
            {
                forb = min(forb, 8-1-j);
                break;
            }
        }
    }
    if(fora <= forb) cout << "A" << endl;
    else            cout << "B" << endl;

    return 0;
}