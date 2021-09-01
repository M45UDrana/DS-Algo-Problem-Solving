#include <bits/stdc++.h>

const int N = 15+7;

using namespace std;

int main()
{
    int cur, ter, a, b;
    cin >> cur >> ter >> a >> b;
    cur += 8*a;
    if(cur >= ter)
        cout << 0 << endl;
    else if(a <= b)
        cout << -1 << endl;
    else cout << (ter-cur+(12*(a-b)-1))/(12*(a-b)) << endl;

    return 0;
}