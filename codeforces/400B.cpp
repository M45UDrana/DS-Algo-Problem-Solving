#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    set<int> st;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        while(s[i][j] != 'G')
            j++;
        int cnt = 0;
        while(j < m and s[i][j] != 'S')
        {
            j++;
            cnt++;
        }
        if(s[i][j] == 'S')
            st.insert(cnt);
        else return !(cout << -1 << endl);
    }
    cout << st.size() << endl;
    return 0;
}