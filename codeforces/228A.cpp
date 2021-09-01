#include <bits/stdc++.h>

using namespace std;
#define debugsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'

int main()
{
    int a[4], ans = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for(int i = 0; i < 3; i++)
    {
        if(a[i] != 0)
        {
            for(int j = i+1; j < 4; j++)
                if(a[i] == a[j])
                {
                    a[j] = 0;
                    ans++;
                }
        }
    }
    cout << ans << endl;

    return 0;
}