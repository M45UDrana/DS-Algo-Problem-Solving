#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

const int N = 1e7+5;
bool status[N]={0};
int main()
{
    IO
    for(int i = 4; i < N; i+=2)
        status[i] = 1;

    int n = sqrt(N)+1;
    for(int i = 3; i < n; i+=2)
    {
        if(!status[i])
        {
            for(int j = i*i; j < N; j += 2*i)
                status[j] = 1;
        }
    }

    int a;
    cin >> a;
    for(int i = 2, j = 1; j <= a; i++)
    {
        if(!status[i])
        {
            cout << i << '\n';
            j++;
        }
    }
    return 0;
}