#include <bits/stdc++.h>

using namespace std;
#define dcoutsssssssssss(a, b, c) cout << a << " " << b << " " << c << '\n'
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL),cout.tie(NULL);

int main()
{
    string st, str;
    cin >> st >> str;
    reverse(str.begin(), str.end());
    if(str == st)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}