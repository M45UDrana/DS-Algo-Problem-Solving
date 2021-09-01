#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int cntd = 0, cntr = 0;
    queue<int> qd, qr;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'D')
            qd.push(i);
        else qr.push(i);
    }
    while(!qd.empty() and !qr.empty())
    {
        int x = qd.front(), y = qr.front();
        qd.pop(); qr.pop();
        if(x < y)
            qd.push(x+n);
        else qr.push(y+n);
    }
    if(!qd.empty())
        cout << 'D' << endl;
    else cout << 'R' << endl;
    return 0;
}