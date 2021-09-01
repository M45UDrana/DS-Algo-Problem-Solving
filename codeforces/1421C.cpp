#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string g = s;
    reverse(s.begin(),s.end());
    if(s == g)
        return !(cout << 0 << endl);
    int n = s.size();
    cout << 3 << endl;
    cout << "L " << 2 << endl;
    cout << "R " << 2 << endl;
    cout << "R " << n+n-1 << endl;
    return 0;
}