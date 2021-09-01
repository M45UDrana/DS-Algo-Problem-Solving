#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> ar(n);
    vector <int> ar2(k+1);

    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ar2[ar[i]]++;
    }
    int typeod = 0, typeeven = 0, flag = 0;
    for(int i = 1; i <= k; i++)
    {
        if( ar2[i] % 2 == 0)
        {
            typeeven += ar2[i] / 2;
        }
        else
        {
            typeod += ceil((float) ar2[i] /2);
            flag++;
        }
    }

    //cout << typeeven << " " << typeod << endl;

    int type = ceil((float) n / 2);
    int ans = n;
    if( (typeeven + typeod) > type)
    {
        int dif = (typeeven + typeod) - type;
        if(flag < dif)
        {
            ans = n - ((dif - flag) * 2) - flag;
            cout << ans << endl;
        }
        else
        {
            ans = n - dif;
            cout << ans << endl;
        }
    }
    else
    {
        ans = n;
        cout << ans<< endl;
    }


    return 0;
}