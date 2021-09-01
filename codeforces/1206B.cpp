#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ind1 = 0, ind_1 = 0, ind0 = 0;
    long long ans=0;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];

        if( ar[i] > 0)
        {
            ans += ( ar[i] - 1);
            ind1++;
        }
        else if(ar[i] < 0)
        {
            ans += abs((ar[i] + 1));
            ind_1++;
        }
        else
        {
            ans++;
            ind0++;
        }
    }

    if(ind_1 % 2 == 0)
       cout << ans << endl;
    else if(ind0)
        cout << ans << endl;
    else
        cout << ans + 2 << endl;
}