#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int cntn = 1, cntm = 1;
    int nn = 7, mm = 7;
    while(nn < n)
    {
        cntn++;
        nn *= 7;
    }
    while(mm < m)
    {
        cntm++;
        mm *= 7;
    }
    if(cntn + cntm > 7)
        return !(cout << 0 << endl);
    int hur[cntn], mnt[cntm], dgt[7];
    memset(hur, 0, sizeof(hur));
    memset(mnt, 0, sizeof(mnt));

    nn = n; mm = m;
    int ans = 0;
    while(nn--)
    {
        mm = m;
        while(mm--)
        {
            memset(dgt, 0, sizeof(dgt));
            for(int i = 0; i < cntn; i++)
                dgt[hur[i]]++;
            for(int i = 0; i < cntm; i++)
                dgt[mnt[i]]++;
            bool ok = true;
            for(int i = 0; i < 7; i++)
                ok &= (dgt[i] < 2);
            ans += ok;
            if(false)
            {
                cout << ans << endl;
                for(int i = 0; i < cntn; i++)
                    cout << hur[i] << " \n"[i+1==cntn];
                for(int j = 0; j < cntm; j++)
                    cout << mnt[j] << " \n"[j+1==cntm];
                cout << endl;
            }
            int j = cntm-1;
            mnt[j]++;
            while(j)
            {
                mnt[j-1] += mnt[j] > 6;
                mnt[j] %= 7;
                j--;
            }
        }
        memset(mnt, 0, sizeof(mnt));
        int j = cntn-1;
        hur[j]++;
        while(j)
        {
            hur[j-1] += hur[j] > 6;
            hur[j] %= 7;
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}