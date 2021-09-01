#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int n, gp2, gp3;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    sort(a, a+n);
    gp2 = n/3;
    gp3 = (n/3) * 2;

    if(a[gp2-1] >= a[gp2] || a[gp3-1] >= a[gp3])
    {
        cout << -1 << endl;
        return 0;
    }
    vector<int>v;
    for(int i = 0; i < gp2; i++)
    {
        if((a[gp2+i] % a[i] == 0) && (a[gp3+i] % a[gp2+i] == 0))
        {
            v.push_back(a[i]); v.push_back(a[gp2+i]); v.push_back(a[gp3+i]);
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i = 0; i < gp2; i++)
        dcoutsssssssssss(a[i], a[gp2+i], a[gp3+i])



    return 0;
}