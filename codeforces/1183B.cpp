#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++)
    {
        int n, k, mins=1e8+1, maxs=0;
        scanf("%d%d", &n, &k);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
            mins=min(mins,arr[j]);
            maxs=max(maxs, arr[j]);
        }
        //mins = mins + (k*2);
        if((mins + (k*2) ) >= maxs)
            printf("%d\n", mins+k);
        else
            printf("-1\n");
    }
}