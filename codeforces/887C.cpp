#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 24; 
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    if(a[13] == a[14] and a[13] == a[15] and a[13] == a[16]
            and a[17] == a[18] and a[17] == a[19] and
            a[17] == a[20])
    {
        vector<int> lft, rht;
        for(int i = 1; i < 12; i+=2)
        {
            lft.push_back(a[i]);
            rht.push_back(a[i+1]);
        }
        lft.push_back(a[22]);
        lft.push_back(a[24]);
        rht.push_back(a[21]);
        rht.push_back(a[23]);

        lft.push_back(lft[0]);
        lft.push_back(lft[1]);
        rht.push_back(rht[0]);
        rht.push_back(rht[1]); 
        bool ok = true;
        int i = 0, j = 2;
        while(j < 10)
            if(lft[i++] != rht[j++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl);
        ok = true; i = 0; j = 2;
        while(j < 10)
            if(lft[j++] != rht[i++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl);  
    }

    if(a[1] == a[2] and a[1] == a[3] and a[1] == a[4]
            and a[9] == a[10] and a[9] == a[11] and
            a[9] == a[12])
    {
        vector<int> lft, rht;
        lft.push_back(a[15]);
        lft.push_back(a[16]);
        lft.push_back(a[7]);
        lft.push_back(a[8]);
        lft.push_back(a[19]);
        lft.push_back(a[20]);
        lft.push_back(a[23]);
        lft.push_back(a[24]);
        lft.push_back(lft[0]);
        lft.push_back(lft[1]);

        rht.push_back(a[13]);
        rht.push_back(a[14]);
        rht.push_back(a[5]);
        rht.push_back(a[6]);
        rht.push_back(a[17]);
        rht.push_back(a[18]);
        rht.push_back(a[21]);
        rht.push_back(a[22]);
        rht.push_back(rht[0]);
        rht.push_back(rht[1]); 
        bool ok = true;
        int i = 0, j = 2;
        while(j < 10)
            if(lft[i++] != rht[j++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl);
        ok = true; i = 0; j = 2;
        while(j < 10)
            if(lft[j++] != rht[i++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl); 

    }

    if(a[5] == a[6] and a[5] == a[7] and a[5] == a[8]
            and a[21] == a[22] and a[21] == a[23] and
            a[21] == a[24])
    {
        vector<int> lft, rht;
        lft.push_back(a[2]);
        lft.push_back(a[1]);
        lft.push_back(a[13]);
        lft.push_back(a[15]);
        lft.push_back(a[11]);
        lft.push_back(a[12]);
        lft.push_back(a[20]);
        lft.push_back(a[18]);
        lft.push_back(lft[0]);
        lft.push_back(lft[1]);

        rht.push_back(a[4]);
        rht.push_back(a[3]);
        rht.push_back(a[14]);
        rht.push_back(a[16]);
        rht.push_back(a[9]);
        rht.push_back(a[10]);
        rht.push_back(a[19]);
        rht.push_back(a[17]);
        rht.push_back(rht[0]);
        rht.push_back(rht[1]); 
        bool ok = true;
        int i = 0, j = 2;
        while(j < 10)
            if(lft[i++] != rht[j++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl);
        ok = true; i = 0; j = 2;
        while(j < 10)
            if(lft[j++] != rht[i++])
                ok = false;
        if(ok)
            return !(cout << "YES" << endl); 
    }
    cout << "NO" << endl;
    return 0;
}