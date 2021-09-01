#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
const int N=1e5+5;

int distinct[N], state[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int n, m, coun = 0;
    cin >> n >> m;
    int ar[n], num[m];
    for(int i = 0; i < n; i++)
        cin >> ar[i];
    for(int i = 0; i < m; i++)
        cin >> num[i];

    for(int i = n-1; i >= 0; i--)
    {
        if(distinct[ar[i]] == 0)
        {
            coun++;
        }
        distinct[ar[i]]++;
        state[i+1] = coun;
    }

    for(int i = 1; i <= m; i++)
        cout << state[num[i-1]] << '\n';


    return 0;
}