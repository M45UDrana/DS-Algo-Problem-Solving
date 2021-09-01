#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

const int N = 1e7+5;
bool status[N]={0};
int main()
{
    IO
    int n;
    cin >> n;
    vector<pair<int,int>>l(n);
    int r[n], maxr = 0;

    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp >> r[i];
        l[i].first = tmp; l[i].second = i;
        maxr = max(maxr, r[i]);

    }
    sort(l.begin(), l.end());
    if(r[l[0].second] == maxr){
        cout << l[0].second+1 << endl;
        return 0;
    }

    for(int i = 1; i < n; i++)
    {
        if(l[i].first == l[i-1].first)
        {
            if(r[l[i].second] == maxr)
            {
                cout << l[i].second+1 << endl;
                return 0;
            }
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }



    return 0;
}