#include <bits/stdc++.h>

using namespace std;

#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e5+1;

int main()
{
    input;
    output;
    int n, m;
    cin >> n >> m;
    if(n >= m)
    {
        for(int i = 0, b = 0, g = 0; i < n+m; )
        {
            if(b < n)
            {
                cout << 'B';
                b++; i++;
            }
            if(g < m)
            {
                cout << 'G';
                g++; i++;
            }
        }
    }
    else
    {
        for(int i = 0, b = 0, g = 0; i < n+m; )
        {
            if(g < m)
            {
                cout << 'G';
                g++; i++;
            }
            if(b < n)
            {
                cout << 'B';
                b++; i++;
            }
        }
    }
    return 0;
}