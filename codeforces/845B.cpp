#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int a[6];
    for(int i = 0; i < 6; i++)
        a[i] = s[i]-'0';
    int dig[6], ans = 6;
    for(int i = 0; i <= 9; i++)
    {
        for(int j = 0; j <= 9; j++)
        {
            for(int k = 0; k <= 9; k++)
            {
                for(int ii = 0; ii <= 9; ii++)
                {
                    for(int jj = 0; jj <= 9; jj++)
                    {
                        for(int kk = 0; kk <= 9; kk++)
                        {
                            dig[0] = i;
                            dig[1] = j;
                            dig[2] = k;
                            dig[3] = ii;
                            dig[4] = jj;
                            dig[5] = kk;
                            if(dig[0]+dig[1]+dig[2] == dig[3]+dig[4]
                                    + dig[5])
                            {
                                int cnt = 0;
                                for(int l = 0; l < 6; l++)
                                    cnt += a[l] != dig[l];
                                ans = min(ans, cnt);
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}