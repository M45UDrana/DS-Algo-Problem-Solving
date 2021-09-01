#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
const int N = 1e3+1;

int main()
{
    int n;
    cin >> n;
    int a[N] = {0};
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
    sort(a, a+N);
    int cnt = (n+1) / 2;
    if(a[N-1] <= cnt)  cout << "YES" << endl;
    else            cout << "NO" << endl;


    return 0;
}