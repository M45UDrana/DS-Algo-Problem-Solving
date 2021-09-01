#include <bits/stdc++.h>

using namespace std;

string compress(string s)
{
    string t = "";
    int m = s.size();
    for(int i = 0; i < m; i++)
    {
        if(s[i] == 'u')
        {
            t += 'o';
            t += 'o';
        }
        else if(s[i] == 'k')
        {
            int j = i+1;
            while(j < m and s[j] == 'k')
                j++;
            if(j < m and s[j] == 'h')
            {
                t += 'h';
                i = j;
            }
            else t += s[i];
        }
        else t += s[i];
    }
    return t;
}
int main()
{
    int n; cin >> n;
    set<string> st;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        s = compress(s);
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}