#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector <int> a(n);
    int colm=0;
    long long total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {
        if(a[i]>colm)
            colm++;
    }
    cout<<total-((a[n-1]-colm)+n);
    return 0;
}