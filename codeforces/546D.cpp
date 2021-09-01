#include <bits/stdc++.h>

using namespace std;

const int N = 5e6+5;
vector<bool> seive(N,0);
vector<int> divisor(N, 0), factor(N,0);

void calSeive()
{
    int n = sqrt(N)+1;
    for(int i = 4; i < N; i+=2)
    {
        seive[i] = 1;
        divisor[i] = 2;
    }
    for(int i = 3; i <= n; i+=2)
    {
        if(!seive[i])
        {
            for(int j = i*i; j < N; j += 2*i)
            {
                seive[j] = 1;
                divisor[j] = i;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    calSeive();
    for(int i = 2; i < N; i++)
    {
        if(!seive[i])
        {
            factor[i] = 1;
            continue;
        }
        factor[i] = factor[i/divisor[i]]+1;
    }
    for(int i = 1; i < N; i++)
        factor[i] += factor[i-1];
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        cout << factor[a] - factor[b] << '\n';
    }
    return 0;
}