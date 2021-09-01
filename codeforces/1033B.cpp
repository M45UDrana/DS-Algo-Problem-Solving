#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long a, b, c;
        int d=2;
        cin>>a>>b;
        c=a-b;
        if(c>1)
        {
            d=0;
        }
        else if((a+b)%2==0 && d!=0)
        {
            d=0;
        }
        else if(1)
        {
            for(long long i=3; i*i<=(a+b); i=i+2)
            {

                if((a+b)%i==0)
                {
                    d=0;
                    break;
                }
            }
        }
        else
            d=1;

        if(d==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}