#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), ind = -1, ind2 = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i] && ind == -1)
        {
            ind = i;
        }
        else if(a[i] != b[i])
        {
            ind2 = i;
            break;
        }
    }

    if(ind != -1 && ind2 != -1)
        swap(a[ind], a[ind2]);

    if(a == b)  cout << "YES" << endl;
    else        cout << "NO" << endl;

    return 0;
}