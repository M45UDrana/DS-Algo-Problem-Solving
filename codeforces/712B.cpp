#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.size();
    if(n%2)
    {
        cout << -1 << endl;
        return 0;
    }
    int L = 0, R = 0, U = 0, D = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
            L++;
        else if(s[i] == 'R')
            R++;
        else if(s[i] == 'U')
            U++;
        else D++;
    }
    int cnt = abs(L-R);
    cnt += abs(U-D);
    cout << cnt / 2 << endl;
    return 0;
}