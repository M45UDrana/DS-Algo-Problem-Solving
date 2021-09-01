#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    string s, t; cin >> s >> t;
    string g = "abc", tmp, ans;
    while(1)
    {
        tmp = g + g[0];
        if(int(g.find(s)) == -1 && int(g.find(t)) == -1)
            break;
        bool flg = next_permutation(g.begin(), g.end());
        if(!flg)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    for(int i = 0; i < 3*n; i++)
        cout << tmp[i%3];
    cout << endl;

    return 0;
}