#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, totaln = 0, totalp;
    cin >> n;
    int ar[n], in[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        totaln += ar[i];
    }
    totalp = ar[0];

    if(totaln / 2 < totalp)
    {
        cout << 1 << endl << 1 << endl;
        return 0;
    }

    for(int i=1, j = 1; i<n; i++)
    {
        if(ar[i] <= ar[0]/2)
        {
            totalp += ar[i];
            in[j++] = i+1;
            if(totaln / 2 < totalp)
            {
                cout << j << endl << 1 <<" ";
                for(int l=1; l < j; l++)
                    cout << in[l] << " ";
                return 0;
            }
        }
    }

    cout << 0 << endl;


    return 0;
}