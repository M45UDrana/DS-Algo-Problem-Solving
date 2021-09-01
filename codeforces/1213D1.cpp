#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for(int i = 0; i < int(n); i++)

int main()
{
    int n, k, temp, coun, operas, ans = INT_MAX, tempans, k1, l, fttemp;
    cin >> n >> k;
    int ar[n], arr[n];
    forn(i, n)
    cin >> ar[i];

    forn(i, n)
    {
//        k1 = 0;
//        l = 0;
//        tempans = 0;
        fttemp = ar[i];
        while(fttemp > 0){
            k1 = 0;
            l = 0;
            tempans = 0;
        forn(j, n)
        {
            temp = ar[j];
            coun = 0;
//            cout << coun << " " << temp << " " << ar[j] << endl;
            if(temp > fttemp)
            {
                while(temp > fttemp)
                {
                    temp /= 2;
                    coun++;
                }
            }
            if(temp == fttemp)
            {
                arr[l++] = coun;
//                cout << ar[i] << " " << ar[j] << " "<< coun << endl;
                k1++;
            }
        }
        if(k1 >= k)
        {
            sort(arr, arr+l);
            forn(kk, k)
                tempans += arr[kk];
            ans = min(ans, tempans);
        }
        fttemp /= 2;
        }
    }
    cout << ans << endl;
    return 0;
}
/*
5 3
1 2 2 4 5

1

5 3
1 2 3 4 5

2

5 3
1 2 3 3 3

0
*/