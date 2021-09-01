#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int nrth = 0;
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        int x; string s;
        cin >> x >> s;
        if(nrth == 0 and s != "South")
            ok = false;
        else if(nrth == 20000 and s != "North")
            ok = false;
        else if(s == "South")
            nrth += x;
        else if(s == "North")
            nrth -= x;

        if(nrth > 20000 or nrth < 0)
            ok = false;
    }
    if(nrth or !ok)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}