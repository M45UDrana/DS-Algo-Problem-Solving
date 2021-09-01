#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l, r;
    cin>>l>>r;
    cout<<"YES"<<endl;
    long long n;
    for( ; l<=r;){
        n=l+1;
        cout<<l<<" "<<n<<endl;
        l=n+1;
    }


    return 0;
}