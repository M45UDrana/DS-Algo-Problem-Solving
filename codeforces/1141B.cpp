#include <bits/stdc++.h>

using namespace std;

int arrq[200001], arrp[200001];
int main()
{
    int n, m=0;
    cin>>n;
    //int arrq[n-1], arrp[n];
    for(int i=0; i<n-1; i++)
        cin>>arrq[i];

    for(int i=1; i<=n; i++)
    {
        int a=arrq[0] + i;
        if(1 <= a && a <= n)
        {
            arrp[0]=i;
            arrp[1]=(arrq[0] + i);
            break;
        }
    }

    for(int i=1; i<n-1; i++)
    {
        int a=arrp[i]+arrq[i];
        if(1 <= a && a <= n)
        {
            arrp[i+1]=a;
            //cout<<i<<endl;
        }
        else
        {
            cout<<"-1";
            return 0;
        }
    }

    for(int i=0; i<n; i++)
        arrq[i]=arrp[i];

    sort(arrq, arrq+n);

    for(int i=0; i<n-1; i++)
    {
        if(arrq[i] != arrq[i+1])
        {
            cout<<"-1";
            return 0;
        }
    }

    for(int i=0; i<n; i++)
        cout<<arrp[i]<<" ";
    return 0;

}