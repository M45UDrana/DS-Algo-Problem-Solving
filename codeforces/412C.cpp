#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int m = s[0].size();
    for(int i = 0; i < m; i++)
    {
        set<char> st;
        for(int j = 0; j < n; j++)
            if(s[j][i] != '?')
                st.insert(s[j][i]);
        if(st.size() == 0)
            cout << 'a';
        else if(st.size() == 1)
            cout << *st.begin();
        else cout << '?';
    } 
    cout << endl;
    return 0;
}