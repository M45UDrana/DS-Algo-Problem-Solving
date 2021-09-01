#include <bits/stdc++.h>

using namespace std;

const int maxn = (int)2e5+5;

int a[maxn];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, b, j, bcount=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>j;
        a[j]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b;
        if(bcount < a[b]){
            cout<<a[b]-bcount<<" ";
            bcount=a[b];
        }
        else cout<<'0'<<" ";
    }

    return 0;
}