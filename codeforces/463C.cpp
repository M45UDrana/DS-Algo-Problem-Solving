#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    ll n; cin >> n;
    ll a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    ll left[n][n], right[n][n], sum;
    for(int in = 0,i,j; in < n; in++)
    {
        sum = 0;
        i = in; j = 0;
        while(i < n and j < n)
            sum += a[i++][j++];
        i = in; j = 0;
        while(i < n and j < n)
            right[i++][j++] = sum;
        
        sum = 0;
        i = 0; j = in;
        while(i < n and j < n)
            sum += a[i++][j++];
        i = 0; j = in;
        while(i < n and j < n)
            right[i++][j++]= sum;

        sum = 0;
        i = in; j = n-1;
        while(i < n and j >= 0)
            sum += a[i++][j--];
        i = in; j = n-1;
        while(i < n and j >= 0)
            left[i++][j--] = sum;

        sum = 0;
        i = 0; j = in;
        while(i < n and j >= 0)
            sum += a[i++][j--];
        i = 0; j = in;
        while(i < n and j >= 0)
            left[i++][j--] = sum;
    }
    ll white = 0, black = 0;
    pair<int,int> wt = {1,1}, blk = {1,2};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum = (right[i][j] + left[i][j])-a[i][j];
            if((i+j)%2 and sum > white)
            {
                white = sum;
                wt = make_pair(i+1,j+1);
            }
            if((i+j)%2 == 0 and sum > black)
            {
                black = sum;
                blk = make_pair(i+1,j+1);
            }
        }
    }
    cout << white+black << endl;
    cout << wt.first << " " << wt.second << 
        " " << blk.first << " " << blk.second << endl;
    return 0;
}