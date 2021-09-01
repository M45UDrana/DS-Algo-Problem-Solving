#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;

#define pb(a) push_back(a);

const int MAX = 1e6;


int main()
{
    int n, ans=0;
    long long tlsum=0;
    cin>>n;
    vi arr;
    vi starr;
    vi res_arr;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        arr.pb(j);
        starr.pb(j);
        tlsum += j;
    }

    sort(starr.begin(), starr.end());
    for(int i=n-1; i>=0; i--)
    {
        long long m = (tlsum-arr[i]);

        if(arr[i] != starr[n-1] && m/2 <= MAX)
        {
            if(m/2 == starr[n-1] && m%2 == 0)
            {
                ans++;
                res_arr.pb(i+1);
            }
        }
        else if(arr[i] == starr[n-1] && m/2 <= MAX)
        {
            if(m/2 == starr[n-2] && m%2 == 0)
            {
                ans++;
                res_arr.pb(i+1);
            }
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<res_arr.size(); i++)
    {
        cout<<res_arr[i]<<" ";
    }
}