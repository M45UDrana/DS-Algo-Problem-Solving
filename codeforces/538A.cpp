#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    string g = "CODEFORCES";
    int n = s.size();
    int in1 = 0, in2 = 0;
    for(int i = 0; i < g.size(); i++)
    {
        if(s[i] != g[i])
            break;
        else in1++;
    }

    for(int i = s.size()-1, j = g.size()-1; i >= 0 and j >= 0; i--, j--)
    {
        if(s[i] != g[j])
            break;
        else in2++;
    }
    if(in1 + in2 >= 10)
    {
       cout << "YES" << endl;
      return 0;
    }
   cout << "NO" << endl; 
    return 0;
}