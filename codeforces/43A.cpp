#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    string a, b, tmp;
    int n, cnta = 1, cntb = 0;
    cin >> n;
    cin >> a;

    for(int i = 1; i < n; i++)
    {
        cin >> tmp;
        if(tmp == a)
        {
            cnta++;
        }
        else
        {
            b = tmp;
            cntb++;
        }
    }
    if(cnta > cntb)
    {
        cout << a << endl;
    }
    else cout << b << endl;
    return 0;
}