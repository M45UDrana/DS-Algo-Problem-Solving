#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n, t; cin >> n >> t;
    vector<int>v[n+1];
    int N = pow(2, n);
    for(int i = 0; i < N; i++)
    {
        int tmp; cin >> tmp;
        v[0].push_back(tmp);
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < v[i-1].size(); j+=2)
        {
            if(i%2)
            {
                v[i].push_back(v[i-1][j] | v[i-1][j+1]);
            }
            else v[i].push_back(v[i-1][j] ^ v[i-1][j+1]);
        }
    }
    while(t--)
    {
        int p, b; cin >> p >> b;
        p--;
        v[0][p] = b;
        for(int i = 1; i <= n; i++)
        {
            p /= 2;
            if(i%2)
                v[i][p] = (v[i-1][p*2] | v[i-1][p*2+1]);
            else
                v[i][p] = (v[i-1][p*2] ^ v[i-1][p*2+1]);
        }
        cout << v[n][0] << endl;
    }
    return 0;
}