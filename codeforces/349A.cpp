#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int n, a, cnt25 = 0, cnt50 = 0;
    cin >> n;
    bool flg = true;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == 25)
            cnt25++;
        else if(a == 50)
        {
            cnt25--;
            cnt50++;
        }
        else if(a == 100)
        {
            if(cnt50 > 0)
            {
                cnt50--;
                cnt25--;
            }
            else cnt25 -= 3;
        }
        if(cnt25 < 0) flg = false;
    }
    if(flg) cout << "YES" << endl;
    else    cout << "NO" << endl;
    return 0;
}