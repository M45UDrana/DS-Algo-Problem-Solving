#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m, ar[11], temp, sum = 0, ans = 0;
        cin >> n >> m;
        for(int i = 1; i <= 10; i++)
        {
            temp = i * m;
//            cout <<i<< " "<< temp << endl;
            while(temp > 9)
            {
                temp = temp % 10;
            }
            ar[i-1] = temp;
            sum += temp;
        }
        ans += sum * (n / (m * 10));
        temp = (n % (m * 10)) / m;
        int j = 0;
        while(temp--)
        {
            ans += ar[j++];
        }
        cout << ans << endl;

    }
    return 0;
}
/*
7
1 1
10 1
100 3
1024 14
998244353 1337
123 144
1234312817382646 13

1
45
153
294
3359835
0
427262129093995
*/