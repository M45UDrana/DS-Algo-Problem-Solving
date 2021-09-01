#include <bits/stdc++.h>

using namespace std;

#define dcoutsssssssssss(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n';
#define IO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ar[a][b][c];
    long long sum = 0;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int l = 0; l < c; l++)
                ar[i][j][l] = (i+1)*(j+1)*(l+1);
        }
    }

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int l = 0; l < c; l++)
            {
                int sq = sqrt(ar[i][j][l]), cnt = 0;
                for(int k = 1; k <= sq ; k++)
                {
                    if(ar[i][j][l] % k == 0)
                        cnt+=2;
                    int tmp = ar[i][j][l] / k;
                    if(tmp * tmp == ar[i][j][l])
                        cnt--;
                }

                sum+=cnt;
            }
        }
    }
    cout << sum << endl;
    return 0;
}