#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    vector<int> a, d;
    int b = 0;
    int i = 0;
    while(s[i] != '.')
        a.push_back(s[i++] - '0');
    i++;
    while(s[i] != 'e')
        d.push_back(s[i++] - '0');
    i++;
    while((int)s.size() != i)
        b = (b*10) + (s[i++]-'0');
    while(b--)
    {
        if((int)d.size())
        {
            a.push_back(d[0]);
            d.erase(d.begin());
        }
        else a.push_back(0);
    }
    while((int)a.size() > 1 and a[0] == 0)
        a.erase(a.begin());
    while((int)d.size() > 0 and d[d.size()-1] == 0)
        d.erase(d.end()-1);

    for(int i = 0; i < a.size(); i++)
        cout << a[i];
    if((int)d.size())
    {
        cout<<'.';
        for(int i = 0; i < d.size(); i++)
            cout << d[i];
    }
    cout << endl;
    return 0;
}