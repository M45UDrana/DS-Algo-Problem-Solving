#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"0"<<endl;
        return 0;
    }
    int a[11], b[11];
    for(int i=0; i<n; i++){
        a[i]=1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            b[j]=a[j];
        }
        for(int j=1; j<n; j++){
            a[j]=a[j-1]+b[j];
        }
    }

    cout<<a[n-1]<<endl;

    return 0;
}