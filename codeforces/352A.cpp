#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, tmp, num5 = 0, num0 = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp == 5)
            num5++;
        else num0++;
    }
    if(num0 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i = num5; i > 0; i--)
    {
        if((i*5) % 9 == 0)
        {
            for(int j = 0; j < i; j++)
                cout << 5;
            for(int j = 0; j < num0; j++)
                cout << 0;
            return 0;
        }
    }
    cout << 0 << endl;
}