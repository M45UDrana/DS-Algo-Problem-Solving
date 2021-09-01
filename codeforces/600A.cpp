#include <bits/stdc++.h>

using namespace std;

bool isnum(string g)
{
    for(int i = 0; i < g.size(); i++)
    {
        if('0' > g[i] or g[i] > '9')
            return false;
    }
    if(g.size() == 0 or (g.size() > 1 and g[0] == '0'))
        return false;
    return true;
}
int main()
{
    string s, g = ""; cin >> s;
    vector<string> a, b;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ',' or s[i] == ';')
        {
            if(isnum(g))
                a.push_back(g);
            else b.push_back(g);
            g = "";
        }
        else g += s[i];
    }
    if(isnum(g))
        a.push_back(g);
    else b.push_back(g);
    if((int)a.size())
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(i)
                cout << ',' << a[i];
            else cout << '"' << a[i];
            if(i == (int) a.size()-1)
                cout << '"' << endl;
        }
    }
    else cout << '-' << endl;
    if((int)b.size())
    {
        for(int i = 0; i < b.size(); i++)
        {
            if(i)
                cout << ',' << b[i];
            else cout << '"' << b[i];
            if(i == (int) b.size()-1)
                cout << '"' << endl;
        }
    }
    else cout << '-' << endl;


    return 0;
}