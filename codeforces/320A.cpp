#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    int n, cnt = 0, tmp;
    cin >> n;
    while(n)
    {
        tmp = n % 10;
        n = n / 10;
        if(tmp == 4)
            cnt++;
        else if(tmp == 1)
            cnt = 0;
        else
        {
            cout << "NO" << endl;
            return 0;
        }

        if(cnt > 2)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if(tmp != 1)
    {
        cout << "NO" << endl;
            return 0;
    }
    cout << "YES" << endl;

    return 0;
}