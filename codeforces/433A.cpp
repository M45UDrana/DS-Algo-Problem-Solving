#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int n, cnt1 = 0, cnt2 = 0, tmp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp == 100)  cnt1++;
        else            cnt2++;
    }
    if(cnt1 == 0 && cnt2 % 2 == 0)
        cout << "YES" << endl;
    else if(cnt1 == 0)
        cout << "NO" << endl;
    else if(cnt1 % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}