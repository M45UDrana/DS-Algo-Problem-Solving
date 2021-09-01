#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], in = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[in] != a[i])
            in = i;
    }

    if(in+1 > k)
    {
        cout << -1 << endl; return 0;
    }
    cout << in << endl;

    return 0;
}