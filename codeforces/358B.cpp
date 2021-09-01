#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string s = "<3", tmp;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        s += tmp;
        s += "<3";
    }
    string g; cin >> g;
    int m = s.size();
    bool ok = false;
    for(int i = 0, j = 0; i < g.size(); i++)
    {
        if(s[j] == g[i])
            j++;
        if(j == m)
        {
            ok = true;
            break;
        }
    }
    if(ok)
        cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}