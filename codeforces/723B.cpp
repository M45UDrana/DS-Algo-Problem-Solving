#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    bool ok = true, flg = false;
    int ltr = 0, wrd = 0, cntl = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            ok = false;
            cntl = 0;
        }
        else if(s[i] == ')')
        {
            ok = true;
            cntl = 0;
            if(flg)
            {
                flg = false;
                wrd++;
            }
        }
        if(ok)
        {
            if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
            {
                cntl++;
                ltr = max(cntl, ltr);
            }
            else cntl = 0;
        }
        else 
        {
            if((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= 'A' and s[i] <= 'Z'))
                flg = true;
            else if(flg)
            {
                flg = false;
                wrd++;
            }
        }
    }
    cout << ltr << " " << wrd << endl;
    return 0;
}