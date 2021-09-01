#include <bits/stdc++.h>

using namespace std;

int n, k, m;
int ans[51];
string t[51];

bool check(int l)
{
    for(int i = 0; i <= l; i++)
    {
        set<int> st;
        for(int j = i; j-i < k; j++)
        {
            st.insert(ans[j]);
        }
        if((st.size() == k) != (t[i] == "YES"))
            return false;
    }
    return true;
}
int main()
{
    vector<string> s;
    for(int j = 0; j < 2; j++)
    {
        for(int i = 0; i < 25; i++)
        {
            string g = "Aab";
            g[0] += j;
            g[1] += i%25;
            g[2] += i%25;
            s.push_back(g);
        }
    }
    cin >> n >> k;
    m = n+1-k;
    for(int i = 0; i < m; i++)
        cin >> t[i];
    for(int i = 0; i < n; i++)
        ans[i] = i;
    for(int i = 0; i < m; i++)
    {
        if(t[i] == "NO")
        {
            bool ok;
            for(int j = i; j-i < k; j++)
            {
                for(int l = 0; l-i < k; l++)
                {
                    int tmp = ans[j];
                    ans[j] = ans[l];
                    ok = check(i);
                    if(ok)
                        break;
                    ans[j] = tmp;
                }
                if(ok)
                    break;
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << s[ans[i]] << " ";
    cout << endl;

    return 0;
}