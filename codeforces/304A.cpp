#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

bool perprim(int x)
{
    int sq = sqrt(x);
    if(sq * sq == x)
        return true;
    else return false;
}

int main()
{
    int n, ans = 0;
    cin >> n;
    for(int i = 5; i <= n; i++)
    {
        for(int j = i-1; j; j--)
        {
            if( ((i*i) - (j*j)) > j*j)
                break;
            if( perprim((i*i) - (j*j)) )
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}