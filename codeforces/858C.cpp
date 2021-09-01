#include <bits/stdc++.h>

using namespace std;

bool isConsonant(char c)
{
    if(c == 'a' or c == 'e' or c == 'i' or
            c == 'o' or c == 'u')
        return false;
    return true;
}

int main()
{
    string s; cin >> s;
    for(int i = 0, cnt = 0; i < s.size(); i++)
    {
        if(isConsonant(s[i]))
            cnt++;
        else cnt = 0;
  //      cout << endl << cnt << " " << i << endl;
        if(cnt > 2 and (s[i] != s[i-1] or s[i] != s[i-2]))
        {
            cout << " ";
            cnt = 1;
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}