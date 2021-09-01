#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s, g1="", g2 = ""; cin >> s;

        vector<int>ans;
        for(char c = '0'; c <= '9'; c++)
        {   
            bool flg = true;
            for(int i = 0; i < n; i++)
            {
                if(s[i] < c)
                    ans.push_back(1);
                else if(s[i] > c)
                {
                    ans.push_back(2);
                    flg = false;
                }
                else if(flg)
                    ans.push_back(2);
                else ans.push_back(1);

                if(ans[i] == 1)
                    g1 += s[i];
                else g2 += s[i];
            }
            g1 += g2;
         //   cout << g1 << endl;
            bool ok = true;
            for(int i = 1; i < n and ok; i++)
                if(g1[i] < g1[i-1])
                    ok = false;
            if(ok)
            {
                for(auto &it : ans)
                    cout << it;
                cout << endl;
                break;
            }
            else if(c == '9')
                cout << "-" << endl;
            ans.clear();
            g1 = "";
            g2 = "";
        }
            
    }
    return 0;
}