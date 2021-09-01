#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, g = ""; cin >> s;
    bool flg = false;
    for(int i = 0; i < s.size();)
    {
        string k = "";
        int j = i;
        while(s[i] == s[j])
        {
            k += s[j];
            j++;
        }
        if(flg and k.size() >= 2)
        {
            g += k[0];
            flg = false;
        }
        else 
        { 
            g += k[0];
            if(k.size() >= 2)
            {
                g += k[1];
                flg = true;
            }
            else flg = false;
        }
        i = j;
    }
    cout << g << endl;
    return 0;
}