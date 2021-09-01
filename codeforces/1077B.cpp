#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;

#define pb push_back

int main()
{
    int n, ans=0;
    cin>>n;
    vi flats;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        flats.pb(j);
    }

    for(int i=1; i<n-1; i++)
    {
        if(flats[i-1] == 1 && flats[i+1] == 1 && flats[i] == 0)
        {
            flats[i+1]=0;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}