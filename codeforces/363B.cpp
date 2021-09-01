#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e3+1;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    pair<int,int>p;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < k; i++)
    {
        sum += a[i];
        p.first = sum;
        p.second = 1;
    }

    for(int i = 0; i+k < n; i++)
    {
        sum -= a[i]; sum += a[i+k];
        if(sum < p.first)
        {
            p.first = sum;
            p.second = i+2;
        }
    }
    cout << p.second << endl;

    return 0;
}